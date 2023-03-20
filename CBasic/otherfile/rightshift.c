#include<stdio.h>

int main(){
    int a,i,j,b,k;
    scanf("%d",&a);
    scanf("%d",&b);
    
    for(i=7;i>=0;i--){
        j=(a>>i) & 0x1;
        printf("%d",j);
    }
    printf("\n");
   
    for(i=7;i>=0;i--){
        j=(b>>i) & 0x1;
        printf("%d",j);
    }
    printf("\n");

    k=a&b;
    for(i=7;i>=0;i--){
        j=(k>>i) & 0x1;
        printf("%d", j);
    } 
    printf("\n");
     k=a|b;
    for(i=7;i>=0;i--){
        j=(k>>i) & 0x1;
        printf("%d", j);
    }
    printf("\n");
}