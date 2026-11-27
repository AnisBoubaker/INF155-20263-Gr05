//
// Created by Anis Boubaker on 2026-11-27.
//

#ifndef REFUGEETAPE2_REFUGE_H
#define REFUGEETAPE2_REFUGE_H

#include "animal.h"

typedef struct refuge {
    Animal **animaux;
    int nb_animaux;
    int capacite;
}Refuge;

Refuge* refuge_creer(int capacite_initiale);
void refuge_liberer(Refuge* refuge);
void refuge_afficher(const Refuge* refuge);

#endif //REFUGEETAPE2_REFUGE_H
