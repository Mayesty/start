#include "joueur.h"
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
int demande_lettre(char*tableau_lettres)
{
    int indice;
     char lettre;
     indice=rand()%(1+63);
     lettre=tableau_lettres[indice];
     printf("%c",lettre);
     return lettre;
 }
 void motexiste(Player *p,char*mot)
 {


  int existe = 0;
  char mot_bis[26];
  FILE *entree;

    entree = fopen ("dico.txt", "r");
    while (!feof(entree) && strcmp(mot_bis,mot)!=0)
    {
      fscanf (entree,"%s",mot_bis);
      if (strcmp(mot_bis,mot)==0){
        printf ("Bravo ! Le mot existe ! \n");
        existe=1;
        p->score=strlen(mot);
        printf("Votre score du mot est de : %2d",p->score);
      }
    }
  if(!existe)
    printf ("Le mot %s n'existe pas!\n",mot);

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
