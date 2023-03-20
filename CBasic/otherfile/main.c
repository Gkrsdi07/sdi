#include<stdio.h>

extern int result;
extern inline void disp();

int main(){
        int a=10,b=20;
        printf("\n Result: %d",result);
        add(a,b);
        printf("\n Result: %d",result);
        sub(a,b);
        printf("\n Result: %d\n",result);
        disp();

}

