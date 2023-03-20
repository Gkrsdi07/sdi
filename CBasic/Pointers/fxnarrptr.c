#include<stdio.h>

int main(){

    int a[10]={1,2,3,4,5,6,7,8,9,8},*p;

    for(int i=0; i<10;i++){
        a[i]=i+2;
        printf("%d\n",a[i]);
    }
    printf("%d\n",arr(a,10));

    return 0;
}
int arr(int a[],int s){
    for(int i=0;i<10;i++){
        a[i]=i+3;
        printf("%d\n",a[i]);
    }
    
}