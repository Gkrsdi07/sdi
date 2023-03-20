#include<stdio.h>

int sum(int arr[],int n);

int main(){
    int n;
    scanf("%d",&n);

    int arr[n];

    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    
    printf(" Sum is: %d\n",sum(arr,n));
    return 0;
}                                                      

int sum(int arr[], int n){
    int add =0;

    for(int i=0; i<n; i++){
        add+=arr[i];
    }

    return add;
}