#include <stdio.h>
#include <stdlib.h>


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
   int main()
   {
       printf(" 0 pour quitter\n");
       printf(" 1 pour coninuer\n");
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
       return 0;
   }
