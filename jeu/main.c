#include <stdio.h>
#include <stdlib.h>
#include<string.h>

#include"joueur.h"
#include"chiffres.h"
#include"result.h"

int main()
{
    printf("------------BIENVENUE DANS LE JEU LES CHIFFRES ET LES LETTRES----------------\n\n");
    printf("*******PARTIE 1 : LES LETTRES\n");
    printf("*******PARTIE 2 : LES CHIFFRES\n");
    printf("*******PARTIE 3 : LE DUEL\n\n");
    printf("------------VOUS ETES EN MODE ENTRAIENEMT------------------------------------\n\n");
    printf(" ____________________________________________________________________________\n\n");
    printf("            NOUS COMMENCONS PAR LA PATIE CHIFFRES                             \n\n");
    printf(" ____________________________________________________________________________\n\n");

    printf(" Le but est de trouver a travers des opérations mathématiques proposees \n");
    printf(" dans le tableau de signes, le resultat a trouver a partir des nombres\n");
    printf("  tires.Vous n'utiliserez qu'un nombre une seule fois, vous pouvez  \n");
    printf(" reutiliser les resultats de vos operations une seule fois egalement  \n");
    printf("Vous gagnez des points si votre resultat est exact au nombre a trouver \n");
    printf("ou  proche d'une difference de 5\n\n");

    printf("--------------------A VOUS DE JOUER*****BONNE CHANCE------------------------\n\n");
    printf("----------------------------------------------------------------------------\n\n\n\n\n\n\n");

    char nom[10];

    printf("Nous allons commencer par votre profil,veuillez saisir un  surnom\n\n");
    scanf("%s",nom);

  printf("\n\n");

    printf("BIENVENUE~.~%s",nom);
    Player*pPlayer=initplayer(nom);
    profil(pPlayer,nom);
    printf("\n");
    printf("PREMIER PARTIE LETTRE\n");
    printf("veuillez faire votre premier tirage\n");
    printf("vous devez tirez 10 fois une voyelle ou une consomne--\n");
    char choix;
    char*tabvoyel[80]={"AAAAEEEEEEIIIIIIIOOOOOOOUUUUUUUUUUAAAAAAAAAEEEEEEIIIIIIIOOOOOOOOUUUUUUU"};
    char*tabconso[65]={"BBBCCCDDDFFFGGGHHHJJJKKKLLLMMMNNNPPPQQQRRRSSSTTTVVVWWWXXXYYYZZZ"};
    scanf("%c",&choix);
    switch(choix)
    {
        case 'v': demande_lettre(tabvoyel[80]);
        break;
        case'c':demande_lettre(tabconso[65]);
        break;
        default:printf("veuillez entrer une lettre correcte\n");
    }

    Chiffres *pChiffres;
    pChiffres=initabchif(6);
    Results *pResults;
    pResults=initialisation_pile(6);
    printf("\n\n");

    printf("TABLEAU DE NOMBRES------RESUTAT  A TROUVER\n\n");
    affiche_tabchif(*pChiffres);

        char **operateurs;
        int i;
        int taille=3;

      operateurs=(char**)malloc(sizeof(char*)*taille);
      for(i=0; i<taille;i++)
        operateurs[i]=(char*)malloc(sizeof(char)*taille);

        int j;

        operateurs[0][0]='+';
        operateurs[0][1]='-';
        operateurs[1][0]='x';
        operateurs[1][1]='/';
        operateurs[2][1]='R';
        operateurs[2][2]='E';
          printf("\n\n");

     for(i=0;i<3;i++)
    {
        for(j=0; j<3; j++)
        {
            printf("|%2c",operateurs[i][j]);

        }
        printf("|\n");
    }
  printf("\n\n\n");
  choixope();
free(pPlayer);
free(pChiffres);
free(pResults);
























    return 0;
}
