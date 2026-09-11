#include <stdio.h>
#include <stdlib.h>
int main(void) {
    double x, y;

    printf("Saisir la valeur de x: ");
    scanf("%lf", &x);
    printf("Saisir la valeur de y: ");
    scanf("%lf", &y);

    printf("Vous etes sur ");
    if (x==0 && y==0) {
        printf("origine");
    } else if (x==0) {
        printf("axe vertical");
    } else if (y==0) {
        printf("axe horizontal");
        ;
    } else if (x>0 && y>0) {
        printf("cadran 1");
    } else if (x<0 && y>0) {
        printf("cadran 2");
    } else if (x<0 && y<0) {
        printf("cadran 3");
    } else {
        printf("cadran 4");
    }
    printf(".\n");



    return EXIT_SUCCESS;
}
