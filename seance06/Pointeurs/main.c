#include <stdio.h>

int main(void) {
    int a = 10;

    printf("La variable a se trouve a l'adresse: %d\n", &a);
    printf("La variable a se trouve a l'adresse: %p\n", &a);

    int *ptr;

    ptr = &a;
    printf("Contenu de ptr: %p\n", ptr);

    printf("Le contenu qui se trouve à l'adresse stockee dans ptr est: %d\n", *ptr);

    *ptr = 100;
    printf("La variable a contient: %d\n", a);

    int **ptr2;

    ptr2 = &ptr;

    **ptr2 = 1000;
    printf("La variable a contient: %d\n", a);



    return 0;
}
