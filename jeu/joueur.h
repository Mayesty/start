#ifndef JOUEUR_H
#define JOUEUR_H


struct Player
{
    char surname[10];
    int score;
    int final_result;
    char *mot;
};
typedef struct Player Player;

Player*initplayer(char name[]);
void profil();
int demande_lettre(char*tableau_lettres);
void motexiste(Player*p,char*mot);


#endif // JOUEUR_H












