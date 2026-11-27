#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE* mon_fichier = NULL;

    mon_fichier = fopen("../mon_fichier.txt", "r");
    if (mon_fichier == NULL) {
        printf("Erreur d'ouverture\n");
        exit(EXIT_FAILURE);
    }

    /* Lire ou écrire dans mon_fichier... */
    char caractere;
    // caractere = fgetc(mon_fichier);
    // printf("%c", caractere);
    // caractere = fgetc(mon_fichier);
    // printf("%c", caractere);
    // while ( (caractere= fgetc(mon_fichier)) != EOF) {
    //     printf("%c", caractere);
    // }

    char une_chaine[1000];
    // fgets(une_chaine, 1000, mon_fichier);
    // printf("%s", une_chaine);
    while (fgets(une_chaine,1000, mon_fichier) != NULL) {
        printf("%s", une_chaine);
    }
    fclose(mon_fichier);

    FILE* data = fopen("../data.txt", "r");

    double temp_min, temp_moy, temp_max;
    char ville[100];
    char pays[100];
    if (fscanf(data, "%[^;];%[^;];%lf;%lf;%lf",
        ville, pays, &temp_min, &temp_moy, &temp_max) != 5) {
        printf("Format incorrect!\n");
    }

    printf("%s (%s) - Min: %lf, Moy: %lf, Max: %lf\n",
        ville, pays, temp_min, temp_moy, temp_max);

    fclose(data);

    FILE* copie_data = fopen("../copie_data.csv", "w");
    if (copie_data == NULL) {
        printf("Erreur d'ouverture\n");
        exit(EXIT_FAILURE);
    }

    fprintf(copie_data, "%s,%s,%.2lf,%.2lf,%.2lf\n",
        ville, pays, temp_min, temp_moy, temp_max);

    fclose(copie_data);

    return 0;
}
