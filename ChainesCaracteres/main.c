#include <stdio.h>

int main(void) {

    //char bonjour[] = {'B', 'o', 'n', 'j', 'o', 'u', 'r', '\0'};
    char bonjour[] = "Bonjour";

    // for (int i=0; i<7; i++) {
    //     printf("%c", bonjour[i]);
    // }
    printf("%s\n", bonjour);

    //bonjour = "Allo"; Pas possible! `bonjour` est un tableau, on ne peut pas affecter de tableaux.
    bonjour[0]='A';
    bonjour[1]='l';
    bonjour[2]='l';
    bonjour[3]='o';
    bonjour[4]='\0';

    printf("%s\n", bonjour)
    ;
    char *nom = "Valjean";

    //nom[0] = 'K'; Interdit, la chaine de caractères est en lecdture seule dans ce cas.

    char allo[100];
    char *nom2;

    nom2 = nom;

    printf("Le nom est : %s\n", nom);
    printf("Le nom2 est : %s\n", nom2);

    nom2 = bonjour;
    printf("Le nom2 est : %s\n", nom2);

    return 0;
}
