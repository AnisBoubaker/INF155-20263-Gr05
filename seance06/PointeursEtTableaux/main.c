#include <stdio.h>

#define TAILLE_MAX 100

int main(void) {
    int tab[TAILLE_MAX] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    //Un tableau est un pointeur qui pointe sur la première case du tableau.
    printf("%d\n", *tab);

    printf("Ma premiere case se trouve a l'adresse: %d\n", tab);
    printf("L'adresse tab+1 vaut: %d\n", tab+1);
    printf("La donnee qui se trouve a tab+1: %d\n", *(tab+1));

    int* toto;

    toto = tab;

    printf("%d\n", toto[4]);


    return 0;
}
