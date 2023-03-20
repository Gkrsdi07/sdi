#include<stdio.h>

int main(){
    int a, b=3, c=4;
    a = b + (c*=4);
    printf("Value of a : %d\n", a);
    printf("Value of b : %d\n", b);
    printf("Value of c : %d\n", c);
}