#include<stdio.h>

int sum(int *, int *);

int main(){
    int a=5, b=20;
    printf("%d",sum(&a,&b));
}

int sum(int * x, int * y){
    return *x + *y;
}