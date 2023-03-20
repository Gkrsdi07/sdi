#include<stdio.h>
//#pragma pack(1)
//padding imp question for interview
struct xy
{
    int a;
    char c;
    //unsigned char reserved[3];
    //unsigned char zeros[3];
    double d;
}__attribute__((packed))temp = {10,'A',20.14}; //temp;(it use with #pragma pack(1)) //temp = {10,'A',20.14};//

int main(){
    printf("%d\n",sizeof(temp));
    char *ptr = (double *)&temp;
    printf("%lf\n",*(double *)(ptr+5));


    //printf("%p\n",&ptr+5);
    //printf("%p\n",&temp.a);
    //printf("%p\n",&temp.c);
    //printf("%p\n",&temp.d);

    //printf("%d\n",sizeof(temp));
    //printf("\n%d %c %.2lf\n",temp.a,temp.c,temp.d);
}