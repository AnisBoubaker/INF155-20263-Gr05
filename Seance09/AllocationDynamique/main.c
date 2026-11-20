#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int* entier_dynamique = NULL; //Toujours initialiser nos pointeurs à NULL

    entier_dynamique = (int*)malloc(sizeof(int));
    if (entier_dynamique == NULL) {
        printf("Erreur d'allocation\n");
        exit(EXIT_FAILURE);
    }
    *entier_dynamique = 100;
    printf("Contenu de entier_dynamique: %d\n", *entier_dynamique);


    //Tableau d'entiers
    int nb_entiers;
    printf("Combien d'entiers: ");
    scanf("%d", &nb_entiers);

    int* tab_dynamique = NULL;
    tab_dynamique = (int*)malloc(nb_entiers * sizeof(int));
    if (tab_dynamique==NULL) { //Systématiquement: vérifier si l'allocation a fonctionné
        printf("Erreur d'allocation\n");
        exit(EXIT_FAILURE);
    }

    // *(tab_dynamique + 0) = 10;
    // *(tab_dynamique + 1) = 20;
    // *(tab_dynamique + 2) = 30;
    tab_dynamique[0] = 10;
    tab_dynamique[1] = 20;
    tab_dynamique[2] = 30;

    for (int i=0; i<3; i++) {
        printf("%d\n", tab_dynamique[i]);
    }

    free(tab_dynamique);
    tab_dynamique = NULL; //Systématiquement après un free

    return 0;
}
