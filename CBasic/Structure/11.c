#include<stdio.h>

int main(){
    struct zoho
    {
        int employees;
        char comp[5];

        struct  founder
        {
            char coe[10];
        }p;
        
    };

    struct zoho zs = {4000, "zoho", "Sridhar"};
    printf("%s %d %s",zs.comp, zs.employees, zs.p.coe);
    return 0;
}