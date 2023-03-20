#include<stdint.h>

int main(){
    int arr[4]= {4,3,2,1};
    int arr2[4] = {1,2,3,4};
    for(int i=0;i<4;i++){
        arr[i] = arr2[i];
        printf("%d",arr[i]);
    }
    
}