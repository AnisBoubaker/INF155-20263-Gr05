#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "animal.h"




typedef struct refuge {
    Animal **animaux;
    int nb_animaux;
    int capacite;
}Refuge;


int main(void) {

    Animal *a1 = animal_creer(10, "Max", "Chien");
    //Verifier si a1 est NULL...

    a1->date_naiss.jour = 30;
    a1->date_naiss.mois = 2;
    a1->date_naiss.annee = 2020;
    a1->poids = 25;
    a1->est_disponible = 1;

    animal_afficher(a1);

    animal_liberer(a1);

    return 0;
}
