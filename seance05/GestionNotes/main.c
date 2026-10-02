#include <stdio.h>

#define TAILLE_MAX 60

int meilleure_valeur(const int tab[], int taille);
int meilleures_notes(
    const int notes[],
    int taille,
    int seuil,
    int resultats[],
    int max_resultat);

int main(void) {
    int notes[TAILLE_MAX];
    int nb_notes;
    int meilleure_note;
    do {
        printf("Combien de notes (entre 1 et %d): ", TAILLE_MAX);
        scanf("%d", &nb_notes);
    } while (nb_notes<=0 || nb_notes>TAILLE_MAX);

    for (int i=0; i<nb_notes; i++) {
        printf("Saisir la note num.%d: ", i+1);
        scanf("%d", &notes[i]);
    }
    // meilleure_note = notes[0];
    // for (int i=1; i<nb_notes; i++) {
    //     if (notes[i]>meilleure_note) {
    //         meilleure_note = notes[i];
    //     }
    // }
    meilleure_note = meilleure_valeur(notes,nb_notes);
    printf("La meilleure note est: %d\n", meilleure_note);

    int toutes_les_meilleures[TAILLE_MAX];
    int nb_meilleures;
    nb_meilleures = meilleures_notes(notes,
        nb_notes,
        80,
        toutes_les_meilleures,
        TAILLE_MAX);
    printf("\n\nTOUTES LES MEILLEURES NOTES: ");
    for (int i=0; i<nb_meilleures; i++) {
        printf("%d, ", toutes_les_meilleures[i]);
    }


    return 0;
}

int meilleure_valeur(const int tab[], int taille) {
    int meilleure = tab[0];
    for (int i=1; i<taille; i++) {
        if (tab[i] > meilleure) {
            meilleure = tab[i];
        }
    }
    return meilleure;
}
/*
 *Identifie toutes les valeurs de notes qui sont supérieures
 *au seuil et les stocke dans le tableau resultats.
 *La fonction retourne le nombre de valeurs ajoutées au tableau resultats
 */
int meilleures_notes(
    const int notes[],
    int taille,
    int seuil,
    int resultats[],
    int max_resultat) {

    int nb_meilleures = 0;
    for (int i=0; i<taille && nb_meilleures < max_resultat; i++) {
        if (notes[i] > seuil) {
            resultats[nb_meilleures] = notes[i];
            nb_meilleures++;
        }
    }
    return nb_meilleures;
}


