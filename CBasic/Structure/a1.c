#include<stdio.h>

struct 
{
    int i;
    float f;
}decl;

int main(){
    decl.i = 4;
    decl.f = 7.96623;
    printf("%d %.2f",decl.i, decl.f);
    return 0;
}
