#include <stdio.h>
#include <string.h>
#include "chaines.h"

int main(void) {
    char chaine[100];

    strcpy(chaine, "bonjour le monde");
    remplacer_caractere(chaine, ' ', '_');
    strcat(chaine, ".txt");

    printf("%s", chaine);

    return 0;
}
