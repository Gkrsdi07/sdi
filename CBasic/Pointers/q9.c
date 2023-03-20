#include<stdio.h>

int main(){
    int a[] = {3,2,5,0,31,45,7,67,9};
    int *q, *p = a;
    printf("%d %d %d\n",(*p)++, *p++, *++p);
    printf("%d\n",a[2]);
    q=p+3;
    printf("%d\n",*q-3);
    printf("%d\n",*--p + 5);
    printf("%d\n", *p + *q);
    return 0;
}