#include<stdio.h>

int swap(int *, int *);

int main(){
    int a=34,b=32;
    printf("%d %d\n",a,b);
    swap(&a,&b);
    printf("%d %d\n",a,b);
    return 0;
}

int swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}