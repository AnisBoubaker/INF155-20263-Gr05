#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAILLE_MAX_ESPECE 20

typedef struct {
    int jour;
    int mois;
    int annee;
} Date;
typedef struct animal {
    int id;
    char *nom;
    char espece[TAILLE_MAX_ESPECE];
    //Option 1:
    //int date_naiss[3]; //Popssible mais fragile car risques de se tromper.
    //Option 2:
    // int jour;
    // int mois;
    // int annee;
    //Option 3:
    Date date_naiss;
    double poids;
    int est_disponible;
} Animal;

typedef struct refuge {
    Animal **animaux;
    int nb_animaux;
    int capacite;
}Refuge;


int main(void) {
    Animal a1 , a2;
    //Animal *a1;
    // Animal a2;
    // a1 = (Animal*)malloc(sizeof(Animal));
    // a1->id = 10;
    a1.id = 10;
    a1.nom = (char*)malloc(sizeof(char)*(strlen("Max")+1));
    if (a1.nom == NULL) {
        printf("Erreur d'allocation\n");
        exit(EXIT_FAILURE);
    }
    strcpy(a1.nom , "Max");
    strcpy(a1.espece, "Chien");
    a1.date_naiss.jour = 12;
    a1.date_naiss.mois = 7;
    a1.date_naiss.annee = 2022;
    a1.poids = 25.3;
    a1.est_disponible = 1;

    Refuge mon_refuge;

    mon_refuge.animaux = (Animal**)malloc(10*sizeof(Animal*));
    if (mon_refuge.animaux == NULL) {
        printf("Erreur d'allocation\n");
        exit(EXIT_FAILURE);
    }
    mon_refuge.capacite = 10;
    mon_refuge.nb_animaux = 0;

    mon_refuge.animaux[ mon_refuge.nb_animaux ] = &a1;
    mon_refuge.nb_animaux++;

    mon_refuge.animaux[ mon_refuge.nb_animaux ] = &a2;
    mon_refuge.nb_animaux++;

    return 0;
}
