/*
Program for swaping two number without 3rd variable
*/

#include<stdio.h>

int main(){
    int x,y;
    printf("Enter  the value pf a and b \n");
    scanf("%d%d",&x,&y);

    x = x + y;
    y = x - y;
    x = x + y;
    printf("B %d %d",x);
    printf("A : %d %d",x);
    return 0;
}