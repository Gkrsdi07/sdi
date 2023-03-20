#include<stdio.h>

struct employee
{
    //int empno;
    int d;
    int m;
    int y;
}date;

int main(){
    //scanf("%d%d%d",&date.m,&date.d,&date.y);
    //struct employee empn = {.empno=1};
    date.d  = "DD";
    date.m = "MM";
    date.y = "YYYY";
    scanf("%d%d%d",&date.m,&date.d,&date.y);
    printf("%d %d %d\n",date.d,date.m,date.y);
}