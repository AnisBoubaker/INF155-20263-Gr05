/*
 * PARTIE 1: Définir le type de données Capteur. Chaque capteur a une
 * catégorie (chaine de caractères) et une coordonnée (x et y).
 *
 * PARTIE 2: Écrire un programme qui demande à l'usager le nombre
 * de capteurs, et qui demande la saisie des informations
 * de chaque capteur.
 */
#include <stdio.h>
#include <string.h>

#define TAILLE_MAX 50
typedef struct point2d {
    double x;
    double y;
} Point2D;

typedef struct capteur {
    char categorie[TAILLE_MAX];
    //Option 1
    //double coordonnees[2]; //Case 0: x, case 1: y
    //Option 2
    // double x;
    // double y;
    //Option 3:
    Point2D coord;
} Capteur; // Commencer le nom par une majuscule

int main(void) {
    Capteur c1;
    c1.coord.x = 10;
    c1.coord.y = 400;
    strcpy(c1.categorie, "Temperature");
    return 0;
}
