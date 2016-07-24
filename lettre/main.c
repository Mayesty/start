#include<stdio.h>
#include<stdlib.h>
#include<string.h>


typedef struct ElementListe
{
  char *donnee;
  struct ElementListe *suivant;
} Element;

typedef struct ListeRepere
{
  Element *debut;
  int taille;
} Pile;


/* initialisation */
void initialisation (Pile *tas);

/* EMPILER*/
int empiler (Pile *tas, char*donnee);

/* DEPILER*/
int depiler (Pile *tas);

/* Affichage de élément en haut de la pile (LastInFirstOut) */
#define pile_donnee(tas)  tas->debut->donnee

/* Affiche la pile */
void affiche (Pile *tas);





void initialisation (Pile * tas)
{
  tas->debut = NULL;
  tas->taille = 0;
}

/* empiler (ajouter) un élément dans la pile */
int empiler (Pile * tas, char*donnee)
{
  Element *nouveau_element;
  if ((nouveau_element = (Element *) malloc (sizeof (Element))) == NULL)
    return -1;
  if ((nouveau_element->donnee = (char *) malloc (50 * sizeof (char)))
      == NULL)
    return -1;
  strcpy (nouveau_element->donnee, donnee);
  nouveau_element->suivant = tas->debut;
  tas->debut = nouveau_element;
  tas->taille++;
}

/* depiler (supprimer un élément de la pile */
int depiler (Pile * tas){
  Element *supp_element;
  if (tas->taille == 0)
    return -1;
  supp_element = tas->debut;
  tas->debut = tas->debut->suivant;
  free (supp_element->donnee);
  free (supp_element);
  tas->taille--;
  return 0;
}

/* affichage de la pile */
void affiche (Pile * tas){
  Element *courant;
  int i;
  courant = tas->debut;

  for(i=0;i<tas->taille;++i){
    printf("\t\t%s\n", courant->donnee);
    courant = courant->suivant;
  }
}




int main ()
{
    char tabvoyel[71]={"AAAAEEEEEEIIIIIIIOOOOOOOUUUUUUUUUUAAAAAAAAAEEEEEEIIIIIIIOOOOOOOOUUUUUUU"};
    char tabconso[63]={"BBBCCCDDDFFFGGGHHHJJJKKKLLLMMMNNNPPPQQQRRRSSSTTTVVVWWWXXXYYYZZZ"};
    int indice;
    char choix;
  Pile *tas;
  char*lettre;
  if ((tas = (Pile *) malloc (sizeof (Pile))) == NULL)
    return -1;
    if ((lettre= (char *) malloc (50 * sizeof (char))) == NULL)
    return -1;

  initialisation (tas);
  int i;
  for(i=1;i<11;i++)
  {
  printf ("Entrez une lettre  : ");
  scanf ("%c", &choix);
  if(choix=='v')
  {
      indice=rand()%(1+70);
      *lettre=tabvoyel[indice];

  }
  else if(choix=='c')
  {
   indice=rand()%(1+62);
   *lettre=tabconso[indice];
  }
  printf("%s",lettre);
  empiler (tas, lettre);
  printf ("La pile (%d éléments): \n",tas->taille);
  affiche(tas);
  }





  /*printf ("\nLe dernier entré (LastInFirstOut) [ %s ] sera supprimé",
                  pile_donnee(tas));
  printf ("\nLe dernier entré est supprime\n");
  depiler (tas);              /suppression de dernier element entre
  printf ("La pile (%d éléments): \n",tas->taille);
  printf("\n********** Haut de la PILE **********\n");
  affiche(tas);
  printf("__________ Bas de la PILE __________\n\n");*/

  return 0;
}
