#include<stdio.h>

int main(){
    struct alphabets
    {
        char firstLetter;
        struct alphabets;
    }al;
    al.firstLetter = 'a';
    printf("%c",al.firstLetter);
    
}