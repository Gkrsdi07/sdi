#include<stdio.h>

int swap(int*, int*, int*);

int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    swap(&a,&b,&c);
    printf("%d\n%d\n%d\n",a,b,c);
}

int swap(int *x, int *y, int *z){
    int temp = *y;
    *y=*x;
    *x=*z;
    *z = temp;

}