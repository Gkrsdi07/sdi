#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define str_size 100 //micro

void main(){
    char str[str_size];
    int alp, digit, splch, i;
    alp = digit = splch = i = 0;
     printf("\n\nCount total number of alphabets, digit and special characters: \n");
     printf("______________________________________________________________________\n");
     printf("Input the string: ");
     fgets(str, sizeof str, stdin);

    while (str[i]!='\0')
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')){
            alp++;
        } else if(str[i]>='0' && str[i]<='9'){
            digit++;
        } else{
            splch++;
        }
        i++;
    }

    printf("Number of Alphabets in the string is: %d\n",alp);
    printf("Number of Digits in the string is: %d\n", digit);
    printf("Number pf special character in the string is: %d\n\n",splch);
     
}