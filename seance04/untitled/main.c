#include <stdio.h>

/*int test(void) {
    int x = 100;
    x = x*x;
    //Il manque le return car la fonction doit retourner un entier!
}*/
int b = 10; //Variable globale à proscrire, c'est le mal absolu!!

void bizarre(int a) {
    a+=1000;
    b-=10;
}

int main(void) {
    int a = 100;

    bizarre(a+b);

    printf("La variable `a` contient: %d\n", a);

    return 0;
}
