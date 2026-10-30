#include <stdio.h>
#include <string.h>

#define TAILLE_MAX 100

int main(void) {
    char nom1[TAILLE_MAX], nom2[TAILLE_MAX];

    printf("Saisir le premier nom: ");
    fgets(nom1, TAILLE_MAX, stdin);
    nom1[strlen(nom1)-1] = '\0';

    printf("Saisir le deuxieme nom: ");
    fgets(nom2, TAILLE_MAX, stdin);
    nom2[strlen(nom2)-1] = '\0';

    //if (nom1 == nom2) {
    if (strcmp(nom1, nom2)==0){
        printf("Vous avez saisi deux fois le meme nom.\n");
    } else {
        printf("Vous avez saisi deux noms differents.\n");
    }


    return 0;
}
