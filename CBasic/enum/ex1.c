#include<stdio.h>
#include<stdlib.h>

int main(){
    int a,b, cho;
    enum{Add,Sub,Mul,Div,Squar};

    printf("\n Menu\n");
    printf("0. Add\n");
    printf("1. Sub\n");
    printf("2. Mul\n");
    printf("3. Div\n");
    printf("4. Square\n");
    printf("Enter any two number: \n");
    scanf("%d%d",&a,&b);
    printf("Enter Ypur Choice\n");
    scanf("%d",&cho);
    switch (cho)
    {
    case 0:
        printf("\nAddition of given two number: %d\n\n",a+b);
        break;
    case 1:
        printf("\nSubtraction of given two number is: %d\n\n",a-b);
        break;
    case 2:
        printf("\nMultiplaction of given two number is: %d\n\n",a*b);
        break;
    case 3:
        printf("\nDivision of given two number is: %.2f\n\n",a/b);
        break;
    case 4:
        printf("\nSquare of given two number is: %d%d\n\n",a*a,b*b);
        break;            
    default:
        printf("Invalid Choice\n");
        break;
    }
    return 0;
}