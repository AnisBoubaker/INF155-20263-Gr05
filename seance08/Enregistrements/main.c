#include <stdio.h>

typedef struct etudiant {
    double tp1;
    double tp2;
    double intra;
    double final;
    int age;
} etudiant;

//typedef struct etudiant etudiant;

typedef unsigned int uint;

int main(void) {

    int a;
    //struct etudiant e1;
    etudiant e1;
    uint x;

    e1.age = 25;
    e1.tp1 = 80;
    e1.tp2 = 67;
    e1.intra = 90;
    e1.final = 87;

    printf("L'etudiant a %d ans, il a obtenu %.2lf a l'intra, %.2lf au final, et "
           "%.2lf au TP1, %.2lf au TP2.\n", e1.age, e1.intra, e1.final, e1.tp1, e1.tp2);


    int tab[100];

    etudiant classe[40];

    //Donner la note de 85 à l'intra à la personne à l'indice 2 du tableau
    classe[2].intra = 85;

    return 0;
}
