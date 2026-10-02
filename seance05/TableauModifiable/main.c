#include <stdio.h>


void bidon(int a) {
    a = a*a;
}

//Le paramètre est constant: La fonction n'a plus le droit de modifier le tableau original
void bidon_tab(const int tab[], int taille) {
    for (int i=0; i<taille; i++) {
        //Interdit! car tab est constant.
        //tab[i] = tab[i]*tab[i];
    }
}


// Il n'est pas permis de retourner un tableau depuis une fonction
// Pour ce faire, il faut passer un autre tableau qui contiendra les
// résultats.
void carres(const int tab[], int taille, int resultats[], int taille_max_resultat) {
    for (int i=0; i<taille && i<taille_max_resultat; i++) {
        resultats[i] = tab[i] * tab[i];
    }
}



int main(void) {
    int a = 10;
    bidon(a);
    printf("La variable a contient: %d\n", a);

    int mon_tableau[] = { 10, 20, 30 , 40};
    bidon_tab(mon_tableau, 4);
    for (int i=0; i<4; i++) {
        printf("%d, ", mon_tableau[i]);
    }

    int les_carres[2];
    printf("\n\nLES CARRES: ");
    carres(mon_tableau, 4, les_carres, 2);
    for (int i=0; i<2; i++) {
        printf("%d, ", les_carres[i]);
    }

    return 0;
}
