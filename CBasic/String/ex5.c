#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define str_size 100  //Declare the maximum size of string

void main(){
   char str[str_size];
   int i,wrd;
   fgets(str, sizeof str, stdin);

   i=0;
   wrd = 1;

   while(str[i] != '\0'){
    if(str[i]==' ' || str[i] == '\n' || str[i]=='\t'){
        wrd++;
    }
    i++;
   }
   printf("%d\n",wrd-1);
}