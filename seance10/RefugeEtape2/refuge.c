//
// Created by Anis Boubaker on 2026-11-27.
//

#include "refuge.h"

//Constructeur
Refuge* refuge_creer(int capacite_initiale) {
    Refuge* refuge = NULL;

    refuge = (Refuge*)malloc(sizeof(Refuge));
    if (refuge == NULL) {
        return NULL;
    }
    refuge->animaux = (Animal**)malloc(sizeof(Animal*)*capacite_initiale);
    if (refuge->animaux == NULL) {
        free(refuge);
        return NULL;
    }
    refuge->capacite = capacite_initiale;
    refuge->nb_animaux = 0;
    return refuge;
}

void refuge_liberer(Refuge* refuge) {
    if (refuge==NULL) {
        return;
    }
    free(refuge->animaux);
    free(refuge);
}

void refuge_afficher(const Refuge* refuge) {
    printf("Nombre d'animaux: %d / %d\n", refuge->nb_animaux, refuge->capacite);
    printf("-- Liste des animaux --\n");
    for (int i=0; i<refuge->nb_animaux; i++) {
        animal_afficher(refuge->animaux[i]);
    }
}

int refuge_ajouter(Refuge *refuge, const Animal *animal) {
    /**
     * Ajoute l'animal au tableau des animaux et incrémente le nombre d'animaux.
     * Doit d'abord vérifier que la capacité le permet. Si non, on doit agrandir de 10
     * la taille du tableau d'animaux.
     * La fonction retourne Vrai si l'ajout a fonctionné, faux sinon.
     */
}
