#include<stdio.h>

int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int *p,*q;
    p=&a;
    q=&b;
    printf("%d\n",(*p)+(*q));
    return 0;
}