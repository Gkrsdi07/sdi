#include<stdio.h>

int main(){
    int a[] = {8,21,1,3,5,-7,11};
    int *p = &a[2];
    p++;
    printf("%d\n",*p++);
    printf("%d\n",*++p);
    return 0;
}