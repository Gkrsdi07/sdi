#include<stdio.h>

struct  employee
{
    int en;
    float sal;
    char ename[20];
};

int main(){

    struct employee emp[2] = 
    {
        {12,34344,"Ghanshyam"},
        {232,38737826,"Kumar"}
    };

    for(int i=0; i<2; i++){
        printf("%d\n%f\n%s\n",emp->en,emp->sal,emp->ename);  
    }
    return 0;
}
