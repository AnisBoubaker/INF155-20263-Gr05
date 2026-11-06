#include <stdio.h>
#include <string.h>

#define TAILLE_MAX_CHAINE 100

int main(void) {
    char nom[TAILLE_MAX_CHAINE];

    printf("Quel est votre nom: ");
    //scanf marche pas car ça arrête la lecture à un espace
    //scanf("%s", nom); //Pas de &: nom est un pointeur!

    fgets(nom,TAILLE_MAX_CHAINE, stdin);
    // int i=0;
    // while (nom[i]!='\0') {
    //     i++;
    // }
    // nom[i-1] = '\0';
    nom[ strlen(nom)-1 ] = '\0';

    printf("Bonjour %s, comment allez-vous?\n", nom);

    char copie_nom[TAILLE_MAX_CHAINE];

    // copie_nom = nom; //Toujouirs pas le droit de faire ça
    strcpy(copie_nom, nom);
    printf("Copie du nom: %s\n", copie_nom);

    char toto[TAILLE_MAX_CHAINE];

    strcpy(toto , "N'importe quoi!");
    printf("Contenu de toto: %s\n", toto);

    char prenom[TAILLE_MAX_CHAINE];

    printf("Saisir votre prenom: ");
    fgets(prenom, TAILLE_MAX_CHAINE, stdin);
    prenom[ strlen(prenom)-1] = '\0';

    char nom_complet[TAILLE_MAX_CHAINE];
    strcpy(nom_complet, prenom);

    // int debut = strlen(nom_complet);
    // int taille_nom = strlen(nom);
    // for (int i=debut; i<=debut+taille_nom; i++) {
    //     nom_complet[i] = nom[i-debut];
    // }
    strcat(nom_complet, " ");
    strcat(nom_complet, nom);

    printf("Votre nom complet est: %s\n", nom_complet);

    int age;
    printf("Saisir votre age: ");
    scanf("%d", &age);

    //"Vous vous appelez Jean Valjean et vous avez 54 ans"
    char phrase[1000];
    sprintf(phrase, "Vous vous appelez %s %s et vous avez %d ans.", prenom, nom, age);
    printf("La phrase contient: %s\n", phrase);


    return 0;
}
