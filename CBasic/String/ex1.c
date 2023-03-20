#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char s[20];
    //scanf("%s", s);
    fgets(s, sizeof s, stdin);
    printf("%s\n",s);
    return 0;
}