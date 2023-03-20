#include<stdio.h>

int main(){
    int f, mul=1;
    scanf("%d",&f);
    if(f>0){
        for(int i=1; i<=f;i++){
            mul *= i;
        }
    }
    printf("%d\n",mul);
    return 0;
}