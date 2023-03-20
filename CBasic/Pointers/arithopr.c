#include<stdio.h>

void arith(int *, int *);

int main(){
    int a=27, b=9;
    arith(&a,&b);
}

void arith(int *x, int *y){
    printf("%d\n",*x + *y);
    printf("%d\n",*x - *y);
    printf("%d\n",(*x) * (*y));
    printf("%d\n",(*x)/(*y));
}