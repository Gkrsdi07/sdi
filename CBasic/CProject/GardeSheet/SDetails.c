#include<stdio.h>
#include "marks.h"


int main(){
    int n;
    printf("Enetr your Reg No.: ");
    scanf("%d",&n);
    char SName;
    printf("Enter Your Name: ");
    scanf("%s",&SName);
    Mmarks(n);
    Pmarks(n);
    Cmarks(n);
    Bmarks(n);
    return 0;
}