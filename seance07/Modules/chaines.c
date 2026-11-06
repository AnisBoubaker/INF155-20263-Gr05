#include "chaines.h"


void retirer_retour_ligne(char* chaine){
    int i=0;
    while(chaine[i]!='\0'){
        i++;
    }
    if(i>0 && chaine[i-1]=='\n'){
        chaine[i-1]='\0';
    }
}

int compter_occurrences(const char chaine[], char caractere){

    int compteur = 0;
    for(int i=0; chaine[i]!='\0'; i++){
        if(chaine[i]==caractere){
            compteur++;
        }
    }
    return compteur;
}

void remplacer_caractere(char* chaine, char ancien, char nouveau) {
    int taille = strlen(chaine);
    for (int i=0; i<taille ; i++) {
        if (chaine[i]==ancien) {
            chaine[i]=nouveau;
        }
    }
}