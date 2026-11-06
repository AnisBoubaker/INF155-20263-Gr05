#include <stdio.h>

#include "fouille.h"

void tri_insertion(int tab[], int taille);
void afficher_tab(int tab[], int taille);
void tri_selection(int tab[], int taille);

int main(void) {
    int tab[] = {12, 23, 45, 67, 89, 120, 145, 178, 189, 202, 232};
    printf("La valeur se trouve a: %d\n", fouille_binaire(tab, 11, 150));

    int mon_tab[] = {56, 12, 34, 89, 120, 3, 156, 87, 220, 55, 12, 18};
    int mon_tab2[] = {56, 12, 34, 89, 120, 3, 156, 87, 220, 55, 12, 18};

    printf("Tableau initial: ");
    afficher_tab(mon_tab, 12);

    tri_insertion(mon_tab, 12);
    printf("Tri insertion: ");
    afficher_tab(mon_tab, 12);

    tri_selection(mon_tab2, 12);
    printf("Tri selection: ");
    afficher_tab(mon_tab2, 12);

    return 0;
}

void afficher_tab(int tab[], int taille) {
    for (int i=0; i<taille; i++) {
        printf("%d\t", tab[i]);
    }
    printf("\n");
}

void tri_insertion(int tab[], int taille) {
    for (int i=1; i<taille; i++) {
        int valeur = tab[i];
        int j = i;
        while (j>0 && tab[j-1]>valeur) {
            tab[j] = tab[j-1];
            j--;
        }
        tab[j] = valeur;
    }
}

void echanger_cases(int tab[], int indice1, int indice2) {
    int tmp = tab[indice1];
    tab[indice1] =tab[indice2];
    tab[indice2] = tmp;
}

void tri_selection(int tab[], int taille) {
    for (int i=0; i<taille-1; i++) {
        int indice_min = i;

        for (int j=i+1; j<taille; j++) {
            if (tab[j]<tab[indice_min]) {
                indice_min = j;
            }
        }
        if (indice_min!=i) {
            echanger_cases(tab, indice_min, i);
        }
    }
}