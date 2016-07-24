#include "joueur.h"
#include"Lettres.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

Player*initplayer(char *name)
{
    Player*j;
    j=(Player*)malloc(sizeof(Player));
    j->surname[10]=name[10];
    return j;

}
void demande_lettre()
   {

       char tableau[10];
       int i;
       char tabvoyel[71]={"AAAAEEEEEEIIIIIIIOOOOOOOUUUUUUUUUUAAAAAAAAAEEEEEEIIIIIIIOOOOOOOOUUUUUUU"};
       char tabconso[63]={"BBBCCCDDDFFFGGGHHHJJJKKKLLLMMMNNNPPPQQQRRRSSSTTTVVVWWWXXXYYYZZZ"};
       int indice;
       char choix;
       printf(" V : Voyelle");
       printf(" C : Consonne\n");
       char lettre;

  for(i=0;i<10;i++)
  {
       printf("%d entrer votre choix\n",i);
       scanf("%c\n",&choix);
       if(choix=='v')
       {
           indice=rand()%(1+70);
           lettre=tabvoyel[indice];
       }
       else if (choix=='c')
       {
         indice=rand()%(1+62);
         lettre=tabconso[indice];
       }
      tableau[i]=lettre;

  }
  printf("le tableau de lettes\n\n");
  for(i=0;i<10;i++)
  {
      printf("|%3c",tableau[i]);
  }
}






void motexiste(Player *p,char*mot)
 {

   int score;
  int existe = 0;
  char mot_bis[26];
  FILE *entree;

    entree = fopen ("dico.txt", "r");
    while (!feof(entree) && strcmp(mot_bis,mot)!=0)
    {
      fscanf(entree,"%s",mot_bis);
      if (strcmp(mot_bis,mot)==0)
        {
        printf ("Bravo ! Le mot existe ! \n");
        existe=1;
        score=strlen(mot);
       printf("Votre score du mot est de : %2d",score);
      }
    }
  if(!existe)
  {
    printf ("Le mot %s n'existe pas!\n",mot);
    score=0;
    printf("votre score est : %d",score);
 }
 p->score=score;

 }




void profil(Player *p)
{
    char*nom;
    nom=p->surname;
    FILE*fp;
    fp=fopen("profil.txt","a+");
    if(fp==NULL)
    {
        printf("IMPOSSIBLE D'OUVRIR LE FICHIER\n");
    }
    else
    {


        fprintf(fp,"Le nom du joeur est %s :",nom);
        fclose(fp);

    }
}
