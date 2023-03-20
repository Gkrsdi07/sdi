#include<stdio.h>

int main(){
    /*
     int a=5;
    float f=12.4;
    char ch = 'g';

    void *p;
    p=&a;
    printf("%d\n",*(int*)p);
    p=&f;
    printf("%.1f\n",*(float*)p);
    p=&ch;
    printf("%c\n",*(char*)p);
    */
   
   int a= 45;
   int *p=&a;

   p++;
   printf("%X\n",p);
   (*p)++;
   printf("%X\n",p++);

   int b=32;
   int *p1=&b;
   int *p2=&p1;
   printf("%X",p2);

    return 0;
}