#include <stdio.h>
#include <stdlib.h>

int main(void){
    int notes[] = {70, 89, 72, 65, 92, 77, 81, 78};
    int nb_bonnes_notes = 0;

    int meilleure_note=notes[0];
    int indice_pire_note=0;

    for(int i=0; i<8; i++){
        if(notes[i]>80){
            printf("Bonne note trouvee: %d\n", notes[i]);
            nb_bonnes_notes++;
        }
        if(notes[i]>meilleure_note){
            meilleure_note = notes[i];
        }
        if(notes[i]<notes[indice_pire_note]){
            indice_pire_note = i;
        }
    }
    printf("Il y a %d bonnes notes.\n", nb_bonnes_notes);
    printf("La meilleure note est: %d\n", meilleure_note);
    printf("La pire note se trouve a l'indice: %d\n", indice_pire_note);


    return EXIT_SUCCESS;
}