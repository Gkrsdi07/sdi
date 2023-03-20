#include<stdio.h>

struct employee
{
    int empn;
}emp;

int main(){
    struct employee emp = {.empn = 2};
    printf("%d\n",emp.empn);
}