#include<stdio.h>

char sum(int arr[], int n);

int main(){
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    printf("%c\n",sum(arr,n));
    return 0;
}

char sum(int arr[], int n){
    int add1=0, add2=0,a;
    for(int i=0; i<n-5; i++){
        add1+=arr[i];
    }
    //printf("%d",add1);
    for (int i = n/2; i < n; i++)
    {
        add2+=arr[i];
    }
    //printf("%d\n",add2);
    
    return (add1==add2) ? printf("Equal") : printf("Not Equal");
    
}