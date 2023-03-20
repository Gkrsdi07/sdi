#include<stdio.h>

struct  employee
{
    int eno;
    float sal;
    char ename[20];
};

int main(){
    struct employee emp1={10, 50000, "Ghanshyam"};

    printf("%d\n%.3f\n%s\n",emp1.eno, emp1.sal, emp1.ename);
}
