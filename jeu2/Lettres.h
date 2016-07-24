#ifndef LETTRES_H
#define LETTRES_H



struct Lettres
{
    char *tab_lettres;
    int nbelem;
    int tailletablet;
    char lettre;
};
typedef struct Lettres Lettres;

Lettres*initialisation_tabLet(int taille);
int pileLettre_vide(Lettres l);
int pileLettre_pleine(Lettres l);
int empiler_lettre(Lettres*l, char lettre);
void affichage_tablettres(Lettres l);





#endif // LETTRES_H
