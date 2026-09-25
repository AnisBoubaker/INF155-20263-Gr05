#include <stdio.h>

double moyenne(double somme, int nombre)
{
    double moyenne = somme / nombre;
    return moyenne;
}

int main(void) {
    double note, somme=0, moyenne_notes;
    int nb_etudiants=0;

    do {
        printf("Saisir une note: ");
        scanf("%lf", &note );
        somme += note;
        nb_etudiants++;
    } while (note!=-1);
    somme+=1;
    nb_etudiants--;
    moyenne_notes = moyenne(somme,nb_etudiants);

    //printf("La moyenne des notes est: %.2lf\n", moyenne(somme, nb_etudiants));


    return 0;
}
