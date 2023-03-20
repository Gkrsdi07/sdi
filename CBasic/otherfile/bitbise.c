#include<stdio.h>

int main(){
    int num,j,i;
    printf("Enter any decimal number: \n");
    scanf("%d",&num);

    printf("Binary of given number is: ");
    for(i=32; i>=0; i--){
        j = (num>>i) & 0x1 ;
        printf("Poition : %d\n",i);
        printf("Binary Value: %d\n",j);
    }
    return 0;
}