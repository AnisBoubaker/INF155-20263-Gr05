#include <stdio.h>


float saisir_note(double min, double max) {
    float note;
    printf("Entrez la note : ");
    scanf("%f", &note);

    while (note < min || note > max) {
        printf("Note invalide. Recommencez : ");
        scanf("%f", &note);
    }
    return note;
}

void afficher_mention(float note) {
    if (note >= 90) {
        printf("Mention : Excellent\n");
    }
    else if (note >= 80) {
        printf("Mention : Tres bien\n");
    }
    else if (note >= 70) {
        printf("Mention : Bien\n");
    }
    else if (note >= 60) {
        printf("Mention : Passable\n");
    }
    else {
        printf("Mention : Aucune\n");
    }
}

int reussite(float note) {
    // if (note >=60) {
    //     return 1;
    // }
    // return 0;
    return note>=60 ? 1 : 0;
}


int main(void) {
    int nbEtudiants;
    int i;
    float note;
    float somme = 0;
    int nbReussites = 0;

    printf("Nombre d'etudiants : ");
    scanf("%d", &nbEtudiants);

    for (i = 1; i <= nbEtudiants; i++) {

        printf("\nEtudiant %d\n", i);

        note = saisir_note(0, 100);

        somme = somme + note;

        if (reussite(note)) {
            printf("Resultat : Reussite\n");
            nbReussites++;
        }
        else {
            printf("Resultat : Echec\n");
        }

        afficher_mention(note);

    }

    printf("\n--- Resultats du groupe ---\n");
    printf("Moyenne : %.1f\n", somme / nbEtudiants);
    printf("Reussites : %d\n", nbReussites);
    printf("Echecs : %d\n", nbEtudiants - nbReussites);

    return 0;
}