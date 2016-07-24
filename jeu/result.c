#include "result.h"

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<assert.h>


Results* initialisation_pile(int taille)
{
    Results *p;
    p=(Results *)malloc(sizeof(Results));
    p->tabresult=(int *)malloc(sizeof(int)*taille);
    p->nb_elem=0;
    p->tailletab=taille;
    return p;
}


int pile_pleine(Results p)
{
    if(p.nb_elem==p.tailletab)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int pile_vide(Results p)
{
    if(p.nb_elem==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int empiler(Results *p, int element)
{
    if(pile_pleine(*p))
    {
        return -1;
    }
    else
    {
        p->tabresult[p->nb_elem]=element;
        p->nb_elem++;
        return 1;
    }
}

int depiler(Results *p)
{
    if(pile_vide(*p))
    {
        return -1;
    }
    else
    {
        p->nb_elem--;
        return p->tabresult[p->nb_elem];
    }
}

void affichage_tabresult(Results p)
{
    int i;
    for(i=0; i<p.nb_elem; i++)
    {
        printf("|%d",p.tabresult[i]);
    }
    printf("|");
}
