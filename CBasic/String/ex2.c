#include<stdio.h>

int main(){
    char s[20];
    int l =0;
    fgets(s, sizeof s, stdin);
    while (s[l] != '\0')
    {
        l++;
    }
    printf("%d\n",l-1);
    return 0;
}