#include<stdio.h>

int main(){
    int n, key, i, a[n];

    scanf("%d\n",&n);
    scanf("%d",&key);

    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    
    for(i=0; i<n; i++){
        if(key==a[i]){
            printf("Key Founded: %d\n");
        } else{
            printf("Key can not able to find\n");
        }
    }

    return 0;
}