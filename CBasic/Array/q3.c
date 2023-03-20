#include<stdio.h>

void evenodd(int arr[], int n);

int main(){
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    evenodd(arr , n);
    return 0;
}

void evenodd(int arr[], int n){
    int sume=0, sumo=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            sume+=arr[i];
        } else{
            sumo+=arr[i];
        }
    }
    printf("%d\n",sume);
    printf("%d\n",sumo);
}