#include<stdio.h>

int main(){
    int num,j,i;
    printf("Enter any decimal number: \n");
    scanf("%d",&num);

    printf("Binary of given number is: ");
    for(i=7; i>=0; i--){
        j = (num>>i) & 0x1 ;
        printf("Binary Value: %d\n",j);
    }
    return 0;
}