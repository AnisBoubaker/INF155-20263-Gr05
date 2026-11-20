#include <stdio.h>
#include <string.h>

#define TAILLE_MAX_NOM 50

typedef struct etudiant {
    int identifiant;
    char nom[TAILLE_MAX_NOM];
    char prenom[TAILLE_MAX_NOM];
    double tp1;
    double tp2;
    double intra;
    double final;
} Etudiant;

void afficher_etudiant(const Etudiant *et);
double calculer_moyenne(const Etudiant *et);

int main(void) {
    Etudiant et1;

    et1.identifiant = 1;
    strcpy(et1.nom ,  "Villeneuve");
    strcpy(et1.prenom ,  "Julie");
    et1.tp1 = 80;
    et1.tp2 = 78;
    et1.intra = 67;
    et1.final = 54;

    // printf("----- ETUDIANT-E : %d -----\n", et1.identifiant);
    // printf("Nom complet: %s %s\n", et1.prenom, et1.nom);
    // printf("Notes: TP1: %.2lf, TP2: %.2lf, INTRA: %.2lf, FINAL: %.2lf\n", et1.tp1, et1.tp2, et1.intra, et1.final);
    afficher_etudiant(&et1);
    printf("Note du TP1 : %.2lf\n", et1.tp1);


    Etudiant et2;

    et2 = et1;
    afficher_etudiant(&et2);

    printf("Moyenne de et1: %.2lf\n", calculer_moyenne(&et1));

    return 0;
}

void afficher_etudiant(const Etudiant *et) {
    printf("----- ETUDIANT-E : %d -----\n", (*et).identifiant);
    printf("Nom complet: %s %s\n", (*et).prenom, (*et).nom);
    printf("Notes: TP1: %.2lf, TP2: %.2lf, INTRA: %.2lf, FINAL: %.2lf\n", et->tp1, et->tp2, et->intra, et->final);
    //Pas permis car le paramètre est constant
    //et->tp1 = 0 ;
    printf("Moyenne: %.2lf\n", calculer_moyenne(et));
}

/*
 * Écrire la fonction calculer_moyenne qui calcule la moyenne
 * pondérée d'un-e étudiant-e. Déclarez les pondérations
 * comme constantes dans la fonction
 * (TP1: 0.15, TP2: 0.15, Intra: 0.3, Final: 0.4)
 */
double calculer_moyenne(const Etudiant *et) {
    const double coef_tp1 = 0.15;
    const double coef_tp2 = 0.15;
    const double coef_intra = 0.3;
    const double coef_final = 0.4;
    return et->tp1*coef_tp1 + et->tp2*coef_tp2 +
        et->intra * coef_intra + et->final * coef_final;
}