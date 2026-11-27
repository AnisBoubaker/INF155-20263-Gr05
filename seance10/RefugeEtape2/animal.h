//
// Created by Anis Boubaker on 2026-11-27.
//

#ifndef REFUGEETAPE2_ANIMAL_H
#define REFUGEETAPE2_ANIMAL_H

#include <stdlib.h>
#include <stdio.h>
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
    Date date_naiss;
    double poids;
    int est_disponible;
} Animal;


Animal* animal_creer(int id, const char* nom, const char* espece);
void animal_liberer(Animal* animal);
void animal_afficher(const Animal* animal) ;

#endif //REFUGEETAPE2_ANIMAL_H
