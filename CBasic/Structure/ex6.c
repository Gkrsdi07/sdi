#include<stdio.h>
#include<string.h>

struct  employee
{
    int eid;
    float sal;
    char ename[20];
};

int main(){
    struct employee emp={10, 50000, "Ghansyhyam"}, *poi;
    poi=&emp;
    printf("%d\n%f\n%s\n",(*poi).eid, (*poi).sal, (*poi).ename);
}
