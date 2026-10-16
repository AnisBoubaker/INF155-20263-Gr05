#include <stdio.h>

#define MAX_LIGNES 5
#define MAX_COLONNES 4

double moyenne_tab2d(double tab[][MAX_COLONNES], int nb_lignes, int nb_colonnes);

int main(void) {
    int tab[10] = {10, 23, 45};
    double temperatures[MAX_LIGNES][MAX_COLONNES] = {
        {10.5, 12, 13.5, 14} ,
        {13, 14.2, 16.6, 18},
        {15, 18, 17.3, 20}
    };
    printf("La valeur à la case 1,2: %.2lf\n", temperatures[1][2]);

    for (int j=0; j<3; j++) {
        for (int i=0; i<MAX_COLONNES; i++) {
            printf("%.2lf\t", temperatures[j][i]);
        }
        printf("\n");
    }
    // for (int i=0; i<MAX_COLONNES; i++) {
    //     printf("%.2lf\t", temperatures[1][i]);
    // }
    // printf("\n");
    // for (int i=0; i<MAX_COLONNES; i++) {
    //     printf("%.2lf\t", temperatures[2][i]);
    // }
    // printf("\n");

    // double somme = 0;
    // for (int i=0; i<3; i++) {
    //     for (int j=0; j<4; j++) {
    //         somme += temperatures[i][j];
    //     }
    // }
    // double moyenne = somme / (3*4);
    printf("La moyenne des temperatures: %.2lf\n", moyenne_tab2d(temperatures, 3, 4));

    return 0;
}

double moyenne_tab2d(double tab[][MAX_COLONNES], int nb_lignes, int nb_colonnes) {
    double somme = 0;
    for (int i=0; i<nb_lignes; i++) {
        for (int j=0; j<nb_colonnes; j++) {
            somme += tab[i][j];
        }
    }
    return somme / (nb_lignes*nb_colonnes);
}
