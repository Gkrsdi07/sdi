#include<stdio.h>

int main(){
    int a[10] = {1,2,3,4,5,6,7,8,9}, *p;

    for(int i=0; i<10; i++){
        printf("%d %p\n",a[i],&a[i]);
       
    }

    for(int i=0; i<10; i++){
         printf("%X\n",(p+i*4));
    }
    return 0;
}