#include<stdio.h>

int (* func) (int,int);
int arith(int ,int);

int main(){
    int result;
    func = &arith;
    result = (*func)(80,20);
    //printf("%d\n",result);
    return 0;
}

int arith(int x, int y){
    char sign;
    printf("Eneter Operation:\n");
    scanf("%c",&sign);
    switch (sign){
        case '+':
                printf("%d\n",x+y);
                break;
        case '-':
                printf("%d\n",x-y);
                break;
        case '*':
                printf("%d\n",x*y);
                break;
        case '/':
                printf("%d\n",x/y);
                break;  
        default:
                printf("Please Enter Right Sign");                        
    }
    
}