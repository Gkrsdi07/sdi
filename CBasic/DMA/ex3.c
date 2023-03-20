#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr, size, i;
    size = 2;
    ptr = (int*) malloc(size * sizeof(int));

    *(ptr+0) = 1;
    *(ptr + 1) = 2;
}