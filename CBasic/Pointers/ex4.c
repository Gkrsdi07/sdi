#include<stdio.h>

int main(){
    int a[10]= {1,2,3,4,5,6,7,8,9,8};
    int *p=&a;
    //int i;
    /*
     for(i=0;i<10;i++){
        printf("%d\n",a[i]);
    }
    */
   

    printf("%x\n",p);
    printf("%x\n",p+1);
    printf("%x\n",p+2);
    printf("%x\n",p+3);
    printf("%x\n",p+4);
    printf("%x\n",(p+4)-(p+2));

    return 0;
}