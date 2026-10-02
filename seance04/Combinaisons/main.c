#include <stdio.h>

//Déclarations des fonctions
double factorielle(int nb);
int combinaisons_possibles(int nb_par_tirage, int nb_total);


//Fonction principale
int main(void) {

    printf("%d\n", combinaisons_possibles(5, 10));
    printf("%d\n", combinaisons_possibles(10, 10));
    printf("%d\n", combinaisons_possibles(12, 10));

    return 0;
}

//Définition des fonctions

int combinaisons_possibles(int nb_par_tirage, int nb_total) {
    if (nb_par_tirage>nb_total) return 0;

    return factorielle(nb_total)/(factorielle(nb_par_tirage)*factorielle(nb_total-nb_par_tirage));
}

/*
 *Calcule la factorielle de nb.
 *Retourne 0 si nb est erroné (<0)
 */
double factorielle(int nb) {
    double resultat = 1;

    if (nb<0) return 0;

    for (int i=1; i<=nb; i++) {
        resultat *= i;
    }
    return resultat;
}


