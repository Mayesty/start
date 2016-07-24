#include"Lettres.h"

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>


Lettres*initialisation_tabLet(int taille)
{
    Lettres*l;
    l=(Lettres *)malloc(sizeof(Lettres));
    l->tab_lettres=(char*)malloc(sizeof(int)*taille);
    l->nbelem=0;
    l->tailletablet=taille;
    return l;
}


int pileLettre_vide(Lettres l)
{
    if(l.nbelem==l.tailletablet)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int pileLettre_pleine(Lettres l)
{
    if(l.nbelem==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int empiler_lettre(Lettres*l , char lettre)
{
    if(pileLettre_pleine(*l))
    {
        return -1;
    }
    else
    {
        l->tab_lettres[l->nbelem]=lettre;
        l->nbelem++;
        return 1;
    }
}
void affichage_tablettres(Lettres l)
{
    int i;
    for(i=0; i<l.nbelem; i++)
    {
        printf("|%d",l.tab_lettres[i]);
    }
    printf("|");
}


