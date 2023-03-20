#include<stdio.h>

int main(){
    int count=0;
    int j,a,i;

    scanf("%d",&a);

    for(i=7;i>=0;i--){
        j=(a>>i) & 0x1;
        if(j & 1){
            count++;
        }
    }
    printf("%d\n",count);
}