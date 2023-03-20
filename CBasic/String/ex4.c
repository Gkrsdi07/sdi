#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char s[50];
    int l,i;
    
    fgets(s, sizeof s, stdin);

    l=strlen(s);

    for(i=l; i >=0 ;i--){
        printf("%c",s[i]);
    }
    printf("\n");
    return 0;
}