#include<stdio.h>

float count(float *);

int main(){
    float f=10.4;
    printf("Before fxn call: %f\n",f);
    count(&f);
    count(&f);
    printf("After fxn call : %f\n",f);
}

float count(float *c){
    ++*c;
}