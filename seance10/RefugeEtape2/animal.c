//
// Created by Anis Boubaker on 2026-11-27.
//

#include "animal.h"

//Constructeur: creer un animal en allouant tout l'esopace nécessaire
//et (option) mettant la valeurs par défaut ou initiales de champs
Animal* animal_creer(int id, const char* nom, const char* espece) {
    Animal* animal = NULL;

    animal = (Animal*)malloc(sizeof(Animal));
    if (animal == NULL) {
        return NULL;
    }

    animal->nom = (char*)malloc(sizeof(char)*(strlen(nom)+1));
    if (animal->nom == NULL) {
        free(animal);
        return NULL;
    }
    animal->id = id;
    strcpy(animal->nom, nom);
    strcpy(animal->espece, espece);
    animal->poids = 0;
    animal->date_naiss.jour = 0;
    animal->date_naiss.mois = 0;
    animal->date_naiss.annee = 0;
    animal->est_disponible = 0;

    return animal;
}

//Fonction destructeur
void animal_liberer(Animal* animal) {
    if (animal==NULL) {
        return ;
    }
    free(animal->nom);
    free(animal);
}

void animal_afficher(const Animal* animal) {
    printf("[%id] %s (%s), Ne le: %d/%d/%d, Poids: %.2lf, %s\n",
        animal->id,
        animal->nom,
        animal->espece,
        animal->date_naiss.jour,
        animal->date_naiss.mois,
        animal->date_naiss.annee,
        animal->poids,
        animal->est_disponible ? "Disponible":"Non disponible");
}