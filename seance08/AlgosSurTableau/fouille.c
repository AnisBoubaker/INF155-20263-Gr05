//
// Created by Anis Boubaker on 2026-11-06.
//

#include "fouille.h"

int fouille_lineaire(const int tab[], int taille, int element){
    for(int i=0; i<taille; i++){
        if(tab[i]==element){
            return i;
        }
    }
    return -1;
}

int fouille_binaire(const int valeurs[], int nombre, int cible)
{
    int debut = 0, fin = nombre;
    while (debut < fin) {
        int milieu = debut + (fin - debut) / 2;

        if (valeurs[milieu] == cible) return milieu;

        if (valeurs[milieu] < cible) {
            debut = milieu + 1;
        } else {
            fin = milieu;
        }
    }
    return -1;
}
