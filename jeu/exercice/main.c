#include<stdio.h>
#include<stdlib.h>
#include<string.h>



void mot_existe (char *mot)
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
      }
    }
  if(!existe)
    printf ("Le mot %s n'existe pas!\n",mot);

}
int main ()
{
  char mot[20];

  printf ("Mot à rechercher? ");
  scanf ("%s", mot);
  mot_existe (mot);
  return 0;
}

