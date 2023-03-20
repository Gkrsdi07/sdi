#include<stdio.h>

void display();

int mian(){
    for(int i=0;i<3;i++){
        display();
    }

    return 0;
}

void display(){
    static int x=5;
    int y=5;
    x++;
    y++;
    printf("\n x= %d",x);
    printf("\n x= %d",y);
}