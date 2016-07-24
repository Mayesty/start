#include <stdio.h>
#include <stdlib.h>
#include<string.h>

#include"joueur.h"
#include"chiffres.h"
#include"Lettres.h"
#include"result.h"

void enigme()
{
    char reponse[30];
    printf("Pour cette dernière partie , vous devez trouvez une enigme\n");
    printf("-------------C'EST PARTI----------------------------------\n");
    printf("\n\n\n\n");
    printf("Qu'est ce qui vous appartient et mais ue les autres utilisent plus que vous?");
    scanf("%s",reponse);
    if(reponse=="prenom")
    {
                printf("- - - - -  * * * * * * * * * * * * * * * * * * * * * * - - - -\n");
                printf(" - - - - BIEN JOUE  VOUS REMPORTEZ 10 POINTS POUR CETTE PARTIE- - - - - -\n");
                printf("- - - - -  * * * * * * * * * * * * * * * * * * * * * * - - - -\n");

    }
    else if(reponse!="prenom")
    {
                printf("- - - - -  * * * * * * * * * * * * * * * * * * * * * * - - - -\n");
                printf(" - - - -PERDU  VOUS NE REMPORTEZ AUCUN  POINT POUR CETTE PARTIE- - - - - -\n");
                printf("- - - - -  * * * * * * * * * * * * * * * * * * * * * * - - - -\n");

    }

}

int main()
{
    printf("------------*************************************************----------------\n\n");

    printf(" ____________________________________________________________________________\n\n");
    printf("           BIENVENUE DANS LE JEU LES CHIFFRES ET LES LETTRES                            \n\n");
    printf(" ____________________________________________________________________________\n\n");
     printf("------------VOUS ETES EN MODE ENTRAINENEMT------------------------------------\n\n");
      printf("*******PARTIE 1 : LES LETTRES\n");
    printf("*******PARTIE 2 : LES CHIFFRES\n");
    printf("*******PARTIE 3 : L'ENIGME\n\n");
    printf("\n\n");

    printf("REGLES DU JEU\n");
    printf("_______________________________________________________________________________\n");


    printf(" |Pour la partie lettres vous devez trouver un mot a travers un tirage \n");
    printf(" |de 10 lettres .Si le mot existe, votre score esteégale à la longueur \n");
    printf(" |du mot si non il vaudra 0. Dans la partie Chiffres, vous devez trouver\n");
    printf(" |à partir d'un tirage de 5 nombres le resultat demande avec les opérations\n");
    printf(" |de votre choix, un nombre est utilise une  fois de memme que les resulats\n");
    printf(" |de vos operatioons.Vous remportez 10 points si vous trouvez le nombre exact,\n");
    printf(" |8 s'il est proche du nombre a trouver et 0 s'il est tres eloigne\n");
    printf(" |Dans la partie Enigme vous devez trouver une enigme, la bonne réponse vaut \n");
    printf(" |5 points et 0 si non; Votre score final sera egal a la somme de vos scores\n");
    printf(" |dans les différentes partie\n\n");
char caract='*';
  printf("________________________________________________________________________________\n");
  printf("\n\n");


    printf("-------------------------------------------------------------------------------\n\n\n\n\n\n\n");
    printf("%10c * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  ",caract);
    printf("\n");
    printf("%8c %30c",caract,caract);
    printf("\n");
        printf("%6c %33c",caract,caract);
        printf("\n");
        printf("%4c %36c",caract,caract);
        printf("\n");
            printf("%3c  %38c",caract,caract);
            printf("\n");
                printf("%2c ^^^^^^^^^^^^^^^^^^^^^^A VOUS DE JOUER*****BONNE CHANCE^^^^^^^^^^^^^^^^^^^^^^^^",caract);
 printf("%2c",caract);
    printf("\n");
    printf("%3c",caract);
    printf("\n");
        printf("%4c",caract);
        printf("\n");
        printf("%6c",caract);
        printf("\n");
            printf("%8c",caract);
            printf("\n");
                printf("%10c * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * ",caract);

                printf("\n\n\n");


    char nom[10];

    printf("Nous allons commencer par votre profil,veuillez saisir un  surnom\n\n");
    scanf("%s",nom);


    int score1_chif;
    int score2_chif;
    int score_duel;


    int tableau_score[7];

    tableau_score[3]=score1_chif;
    tableau_score[4]=score2_chif;
    tableau_score[5]=score1_chif+score2_chif;
    tableau_score[6]=score_duel;
    tableau_score[7]=tableau_score[2]+tableau_score[5]+tableau_score[6];

    char*mot;
    int taille_mot=10;
    mot=(char*)malloc(sizeof(int)*taille_mot);

    printf("\n\n");

    printf("BIENVENUE ~.~%2s",nom);
    Player*pPlayer=initplayer(nom);
    profil(pPlayer,nom);
    printf("\n\n");
    printf("PREMIERE PARTIE : LES LETTRE\n\n");
    printf("DEBUT DU TIRAGE\n");



      printf(" 0 pour quitter\n");
       printf(" 1 pour continuer\n");
       int choix;
       while(choix!=0)
       {
           scanf("%d",&choix);

           switch(choix)
           {
               case 0: printf("AUREVOIR\n");
                       exit(0);
                       break;
               case 1:demande_lettre();
                       break;
           }
           printf("\n");
        }



    printf("\n");
    printf("VEUILLEZ SAISIR VOTRE MOT\n");
    scanf("%s",mot);

     int score1_l=0;
     motexiste(pPlayer,mot);
     score1_l=pPlayer->score;
     tableau_score[0]=score1_l;
       printf("\n");

    printf("VEUILLEZ SAISIR VOTRE MOT\n");
    scanf("%s",mot);

    int score2_l=0;
    motexiste(pPlayer,mot);

     pPlayer->mot=mot;
    score2_l=pPlayer->score;
    tableau_score[1]=score2_l;

    tableau_score[2]=score1_l+score2_l;

    printf("\n");

    printf("votre score pour la partie lettres es de %d:",tableau_score[2]);


    Chiffres *pChiffres;
    pChiffres=initabchif(6);
    Results *pResults;
    pResults=initialisation_pile(6);
    printf("\n\n");
    printf("PARTIE CHIFFRES\n");

        char **operateurs;

        int taille=3;
        int i;

      operateurs=(char**)malloc(sizeof(char*)*taille);
      for( i=0; i<taille;i++)
        operateurs[i]=(char*)malloc(sizeof(char)*taille);

        int j;

        operateurs[0][0]='+';
        operateurs[0][1]='-';
        operateurs[1][0]='x';
        operateurs[1][1]='/';
        operateurs[2][0]='R';
        operateurs[2][1]='E';
          printf("\n\n");

     for(i=0;i<3;i++)
    {
        for(j=0; j<2; j++)
        {
            printf("|%2c",operateurs[i][j]);
        }
        printf("|\n");
    }
  printf("\n\n\n");
   printf("TABLEAU DE NOMBRES------RESUTAT  A TROUVER\n\n");

 choixope(pChiffres);
 enigme();

free(pPlayer);
free(pChiffres);
free(pResults);







    return 0;
}
