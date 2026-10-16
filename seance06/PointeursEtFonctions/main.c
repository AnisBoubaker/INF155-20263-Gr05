#include <stdio.h>


void min_max(const int tab[], int taille, int *min, int *max);

void f1(int *a) {
    *a = *a * 10;
}



int main(void) {
    int a;

    a = 100;
    f1(&a);

    printf("La variable a contient: %d\n", a);

    int mon_tableau[] = {10, 45, -23, 18, 98, 23, 67, 34, 120, 56, 17, -2, 8};
    int min, max;
    min_max(mon_tableau, 13, &min, &max);
    printf("Le minimum est %d, le maximum est: %d\n", min, max);


    return 0;
}

/* Fonction min_max
 * Écrire la fonction `min_max` qui reçoit un tableau d'entiers à une dimension
 * et qui fournit à l'appelant (à travers des adresses) la valeur minimum et la
 * valeur maximum du tableau
 */
void min_max(const int tab[], int taille, int *min, int *max) {
    *min = tab[0];
    *max = tab[0];
    for (int i=0; i<taille; i++) {
        if (tab[i] < *min) {
            *min = tab[i];
        }
        if (tab[i] >  *max) {
            *max = tab[i];
        }
    }
}
// void min_max(const int tab[], int taille, int *min, int *max) {
//     int le_min = tab[0];
//     int le_max = tab[0];
//
//     for (int i=0; i<taille; i++) {
//         if (tab[i] < le_min) {
//             le_min = tab[i];
//         }
//         if (tab[i] >  le_max) {
//             le_max = tab[i];
//         }
//     }
//     *min = le_min;
//     *max = le_max;
// }










