#include<stdio.h>

int main(){
    char ch;
    scanf("%ch",&ch);
    if((ch=='a' || ch == 'A') || (ch=='e' || ch == 'E') || (ch=='i' || ch=='I') || (ch=='o' || ch == 'O') || (ch=='u' || ch=='U')){
        printf("Vowel");
    } else{
        printf("Constant");
    }
    return 0;
}