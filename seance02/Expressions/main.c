#include <stdio.h>

int main(void) {
    int a, b;

    a = 10;
    b = 3.0;

    printf("La valeur de a+b: %d\n", a+b);
    printf("La valeur de a/b: %d\n", a/b);
    printf("La valeur de a/b: %lf\n", a/b); //Explication plus tard.

    double resultat;
    //resultat = a*1.0 / b;
    resultat = (double)a / b;

    printf("La variable resultat contient: %lf\n", resultat);

    printf("Le reste de a/b: %d\n", a%b);


    int x, y;

    x = 20;
    y = 3;

    printf("PRISE 1: ++ postfixe\n");
    printf("Le resulat de x++ / y est: %d\n", x++ / y);
    printf("x vaut: %d\n", x);

    x = 20;
    printf("PRISE 2: ++ prefixe\n");
    printf("Le resulat de ++x / y est: %d\n", ++x / y);
    printf("x vaut: %d\n", x);

    //Operateurs de comparaison
    printf("10 < 3 vaut: %d\n", 10 < 3);
    printf("3 < 10 vaut: %d\n", 3 < 10);
    printf("25 + (3 < 10) vaut: %d\n", 25 + (3 < 10));




    return 0;
}
