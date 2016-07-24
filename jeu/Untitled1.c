char*tabvoyel[80]={"AAAAEEEEEEIIIIIIIOOOOOOOUUUUUUUUUUAAAAAAAAAEEEEEEIIIIIIIOOOOOOOOUUUUUUU"};
    char*tabconso[65]={"BBBCCCDDDFFFGGGHHHJJJKKKLLLMMMNNNPPPQQQRRRSSSTTTVVVWWWXXXYYYZZZ"};

switch(choix)
    {
        case 'v': demande_lettre(tabvoyel);
        break;
        case'c':demande_lettre(tabconso);
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















