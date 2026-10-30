
#ifndef CHAINES_H
#define CHAINES_H


//Dépendances du module
#include <string.h>


//Prototypes de fonctions
void retirer_retour_ligne(char* chaine);
int compter_occurrences(const char chaine[], char caractere);
void remplacer_caractere(char* chaine, char ancien, char nouveau);

#endif