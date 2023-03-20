#include<stdio.h>
#include <string.h>


struct out_games
{
    int og_id;
    char og_name[10];
};

struct in_games
{
    int in_id;
    char in_name[10];
};

typedef struct
{
    int id, age;
    char name[10], type_game;
    union
    {
        struct out_games og;
        struct in_games ig;
    }game;   
}player;


int main(){
    int i;
    player p[2];
    printf("\n Enter 2 Player Id and Name: \n");
    for(i=0;i<2;i++){
        printf("\n Enter Player Id: \n");
        scanf("%d",&p[i].id);
        printf("\n Enter Player Age: \n");
        scanf("%d",&p[i].age);
        printf("\n Enter Player Name\n");
        scanf("%s",&p[i].name);
        printf("\n Would you like to Register for Indoor Game(I) or Outdoor Game(O): ");

        scanf("%c",&p[i].type_game);
        if((p[i].type_game)=='I'){
            printf("\n Enter Game Id: ");
            scanf("%d",&p[i].game.ig.in_id);
            printf("\n Enter Game Name: ");
            scanf("%s",&p[i].game.ig.in_name);
        } else{
             printf("\n Enter Game Id: ");
            scanf("%d",&p[i].game.og.og_id);
            printf("\n Enter Game Name: ");
            scanf("%s",&p[i].game.og.og_name);
        }
    }   
    printf("\n Player Details \n");
    printf("\n Id\tP_Name\t\tGame_Type\n");
    printf("------------------------------\n");

    for(i=0;i<2;i++){
        printf("\n%4d\t%4d\t%-15s\t%c",p[i].id, p[i].age, p[i].name,p[i].type_game);
        if((p[i].type_game == 'I')){
            printf("\t\t%4d\t\t%-20s",p[i].game.ig.in_id,p[i].game.ig.in_name);
        } else{
            printf("\t\t%4d\t\t%-15s",p[i].game.og.og_id,p[i].game.og.og_name);
        }
    }
    printf("\n");
    return 0;
}
