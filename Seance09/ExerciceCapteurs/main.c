/*
 * PARTIE 1: Définir le type de données Capteur. Chaque capteur a une
 * catégorie (chaine de caractères) et une coordonnée (x et y).
 *
 * PARTIE 2: Écrire un programme qui demande à l'usager le nombre
 * de capteurs, et qui demande la saisie des informations
 * de chaque capteur.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAILLE_MAX 50
typedef struct point2d {
    double x;
    double y;
} Point2D;

typedef struct capteur {
    char categorie[TAILLE_MAX];
    /** Option 1 **/
    //double coordonnees[2]; //Case 0: x, case 1: y
    /** Option 2 **/
    // double x;
    // double y;
    /** Option 3: **/
    Point2D coord;
} Capteur; // Commencer le nom par une majuscule

void afficher_capteur(const Capteur *c);

int main(void) {
    int nb_capteurs;

    printf("Combien de capteurs: ");
    scanf("%d", &nb_capteurs);

    Capteur *tab_capteurs = NULL;
    tab_capteurs = (Capteur*)malloc(nb_capteurs * sizeof(Capteur));
    if (tab_capteurs == NULL) { // if(!tab_capteurs)
        printf("Erreur d'allocation\n");
        exit(EXIT_FAILURE);
    }
    for (int i=0; i < nb_capteurs; i++) {
        printf("--- Saisie du capteur %d\n", i+1);
        printf("Categorie: ");
        getchar(); //Vider le buffer du clavier en enlevant le \n qui est resté trainer.
        fgets(tab_capteurs[i].categorie, TAILLE_MAX, stdin);
        tab_capteurs[i].categorie[ strlen(tab_capteurs[i].categorie) -1 ] = '\0'; //Éliminer le \n à la fin
        printf("x: ");
        scanf("%lf", &tab_capteurs[i].coord.x);
        printf("y: ");
        scanf("%lf", &tab_capteurs[i].coord.y);
    }

    for (int i=0; i<nb_capteurs; i++) {
        afficher_capteur(&tab_capteurs[i]); //afficher_capteur(tab_capteurs + i);
    }

    return 0;
}

void afficher_capteur(const Capteur *c) {
    printf("-----------\n");
    printf("Categorie: %s\n", c->categorie);
    printf("Coordonnees: x=%.2lf, y=%.2lf\n", c->coord.x, c->coord.y);
}
