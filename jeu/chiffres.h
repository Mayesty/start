#ifndef CHIFFRES_H
#define CHIFFRES_H

struct Chiffres
{
    int *tableau_chiffres;
    int N_T;
    int taille;
    int nb1;
    int nb2;
    int result;


};
typedef struct Chiffres Chiffres;



Chiffres*initabchif(int taille);
void affiche_tabchif(Chiffres p);
Chiffres*initabope(int taille);
void choixope();


#endif // CHIFFRES

