#ifndef JOUEUR_H
#define JOUEUR_H


struct Player
{
    char surname[10];
    int final_result;
    char *mot;
    int score;
};
typedef struct Player Player;

Player*initplayer(char name[]);
void profil();
void demande_lettre();
void motexiste(Player*p,char*mot);


#endif // JOUEUR_H












