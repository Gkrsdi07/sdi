#include<stdio.h>

int main(){
    double a,b,c;
    printf("Enter any three Number: ");
    scanf("%lf %lf %lf",&a,&b,&c);

    if(a>=b && a>=c){
        printf("%lf is largest Num ",a);
    } else if(b>=a && b>=c){
        printf("%lf is Laegest Num ",b);
    } else{
        printf("%lf is largest Num ",c);
    }
    return 0;
}