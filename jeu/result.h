#ifndef RESULT_H
#define RESULT_H




struct Results
{
    int *tabresult;
    int nb_elem;
    int tailletab;
};
typedef struct Results Results;

Results* initialisation_pile(int taille);
int pile_pleine(Results p);
int pile_vide(Results p);
int empiler(Results *p, int element);
int depiler(Results *p);
void affichage_tabresult(Results p);



#endif // RESULT_H
