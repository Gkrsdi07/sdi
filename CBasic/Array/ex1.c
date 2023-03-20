#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        printf("Eneter any value in arrayL: ");
        scanf("%d",&arr[i]);
    }
    
    for(int i=0; i<n; i++){
        printf("\n%d\n",arr[i]);
    }
    return 0;
}