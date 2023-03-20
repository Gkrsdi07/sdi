#include<stdio.h>
#define MAX
#include<string.h>
struct  emp
{
    int eno;
    float sal;
    char enm[20];
};

int main(){
    struct emp e[3];
    
    for (int i=0; i<1; i++)
    {
        scanf("%d %f %s",&e[i].eno, &e[i].sal, &e[i].enm);
    }
    for(int i=0;i<1;i++){
        printf("%d\n%f\n%s\n",e[i].eno,e[i].sal,e[i].enm);
    }
    return 0;
}
