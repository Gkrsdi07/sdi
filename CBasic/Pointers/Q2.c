#include<stdio.h>

void add(int *x, int *y);

int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    add(&a, &b);
    return 0;
}

void add(int *x, int *y){
    printf("%d\n",*x + *y);
}