#include<stdio.h>

int main(){
    int a=5,b=6, *p,*q;
    p=&a;
    q=&b;
    if(p>q){
        printf("%d\n",*p);
    } else {
        printf("%d\n",*q);
    }
    return 0;
}