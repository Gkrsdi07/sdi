#include<stdio.h>

struct  TeamScore
{
    int wickets;
    int score;
}ts = {2,325};

struct country
{
    char *name;
}coun = {"India"};

int main(){
    //struct TeamScore tcon = ts;
    printf("%d %d %s\n",ts.score,ts.wickets, coun.name);
    return 0;
}