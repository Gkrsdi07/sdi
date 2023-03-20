#include<stdio.h>
#include<string.h>
struct player
{
    char pname[20];
}pl;

char* play(struct  player *temp_pl)
{
    strcpy(temp_pl->pname, "Kholi");
    return temp_pl->pname;
};

int main(){
    strcpy(pl.pname, "Dhoni");
    printf("%s\n%s\n",pl.pname,play(&pl));
    return 0;
}