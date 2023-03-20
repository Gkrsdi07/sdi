#include<stdio.h>
#include<string.h>

struct empl {
    int eno;
    float sal;
    char eName[20];
} employee;

int main(){

    

    employee.eno = 7;
    employee.sal = 1000000;
    strcpy(employee.eName, "Ghanshyam");

    printf("%d\n",employee.eno);
    printf("%.3f\n",employee.sal);
    printf("%s\n", employee.eName);
    
    return 0;
}