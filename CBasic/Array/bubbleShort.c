#include<stdio.h>


int main(){
    int arr[5] = {4,7,2,76,3};
    int i,j;

    for(i=0;i<5-1;i++){
        for(j=0;j<5-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        printf("%d ",arr[j]);
    }
    
    return 0;
}


