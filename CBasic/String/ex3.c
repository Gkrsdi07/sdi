#include<stdio.h>
#include<stdlib.h>

//seperate the indivisual character from string
int main(){
    char s[20];
    int i;
    printf("Enter the string:");
    gets(s);
    printf("The characters of the strings are:");
    for(i=0;s[i]!='\0';i++)
    {
        printf("%c ",s[i]);
 
    }
}