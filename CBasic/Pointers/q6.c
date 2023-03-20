#include<stdio.h>

int main(){ 
    //Base address of a is 200
    //address of pointer p is 1000
    //address of pointer q is 2000
    int a[] = {21,32,-2,0,1,3,5,-7,11};
    int *p = a;
    int *q = &a[4];
    int d = p-q;
    printf("%d %d %d\n",d,*q,q);

    *q = 25;
    *(p+1) = 27;
    q=q-3;
    p=p+3;
    d=p-q;
    printf("After change: %u %u %u %u %u\n",*p,*q,p,q,d);
    return 0;
}