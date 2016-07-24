#include "chiffres.h"
#include"result.h"

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<assert.h>


///on initialise le tableaux qui contiendra le tableau de chiffres tirés
Chiffres*initabchif(int taille)
{
    Chiffres*p;

    p=(Chiffres*)malloc(sizeof(Chiffres));
    p->tableau_chiffres=(int*)malloc(sizeof(int)*taille);
    p->taille=taille;

 return p;
}


///on affiche le tableau de nombres tirés et le nmbre à trouver N_T
void affiche_tabchif(Chiffres p)
{
    int i;

    p.tableau_chiffres[0]=rand()%(50+1);
    p.tableau_chiffres[1]=rand()%(5+1);
    p.tableau_chiffres[2]=rand()%(6+1);
    p.tableau_chiffres[3]=rand()%(7+1);
    p.tableau_chiffres[4]=rand()%(8+1);
    p.tableau_chiffres[5]=rand()%(9+1);


    for(i=0; i<p.taille; i++)
    {
        printf("|%2d",p.tableau_chiffres[i]);
    }
    printf("|");

    p.N_T=rand()%800;
    printf("|%10d",p.N_T);

}


void choixope()
{
    int nb1;
    int nb2;
    Chiffres p;
    Results*r;
    r=initialisation_pile(6);

    char signe;
    int result;
    int choix=20;

    printf("Vous pouvez commencer vos operations\n");



    while(choix!=0)
    {
        printf("0: quitter\n");
        printf("1: continuer\n");

        scanf("%d",&choix);



     switch(choix)
    {
    case 0:
        printf("Votre resultat final svp final ");
        break;


     case 1:
     printf("c'est parti\n");
    scanf("%d",&nb1);
    scanf("%c",&signe);
    scanf("%d",&nb2);


    p.nb1=nb1;
    p.nb2=nb2;

      if(signe=='+')
      {
        result = p.nb1+p.nb2;
      }
      else if(signe=='-')
      {
        result=p.nb1-p.nb2;
      }
      else if(signe=='*')
      {
        result=p.nb1*p.nb2;
      }
      else if(signe=='/')
      {
        result=p.nb1/p.nb2;
      }



           printf("%d",result);
           printf("\n");
           empiler(r,result);
           break;
    }
            printf("TABLEAU DE VOS RESULTATS\n");
            affichage_tabresult(*r);

           printf("\n\n");

    }



}







