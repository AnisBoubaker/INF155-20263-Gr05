#include <stdio.h>

#define TAILLE_MAX 200

int main(void) {
    double temperatures[TAILLE_MAX] =  {0};
    int nb_temperatures;
    //int tab[];

    printf("La taille maximale du tableau est: %d\n", TAILLE_MAX);

    do {
        printf("Combien de temperatures: ");
        scanf("%d", &nb_temperatures);
    } while (nb_temperatures<0 || nb_temperatures>TAILLE_MAX);

    for (int i=0; i<nb_temperatures; i++) {
        printf("Saisir la temperature num. %d: ", i+1);
        scanf("%lf", &temperatures[i]);
    }



    for (int i=0; i<nb_temperatures; i++) {
        printf("La temperature num. %d est %.2lf\n", i+1, temperatures[i]);
    }

    //temperatures[10] = 235;

    //Pas possible d'afficher un tableau comme ça, il faut le parcourir avec une boucle!
    //printf("Le tableau contient: %d\n", temperatures);




    // for (int i=0; i<TAILLE_MAX; i++) {
    //     printf("La temperature %d est: %.2lf\n", i+1, temperatures[i]);
    // }

    // printf("La temperature 1 est: %.2lf\n", temperatures[0]);
    // printf("La temperature 2 est: %.2lf\n", temperatures[1]);
    // printf("La temperature 3 est: %.2lf\n", temperatures[2]);
    // printf("La temperature 4 est: %.2lf\n", temperatures[3]);
    // printf("La temperature 5 est: %.2lf\n", temperatures[4]);

    //Attention à ne pas déborder du tableau!!
    // printf("La temperature 6 est: %.2lf\n", temperatures[5]);
    // printf("La temperature 1 est: %.2lf\n", temperatures[-1]);


    return 0;
}
