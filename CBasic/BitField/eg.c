#include<stdio.h>
//#pragma pack(1)
struct all
{
    unsigned int d:4;
    unsigned int m:5;
    //unsigned int zeros[0];
    unsigned int y:12;
}DATE;//__attribute__((packed))DATE;


int main(){
    printf("%d\n",sizeof(DATE));
}