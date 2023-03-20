#include<stdio.h>

int main(){
    int a,b,i,j;

    scanf("%d",&a);

    for(i=7;i>=0;i--){
        j=(a>>i) & 0x1;
        //b = ~j;
        printf("%d",b);
    }
}