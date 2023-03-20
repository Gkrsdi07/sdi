#include<stdio.h>

int main(){
    struct branch;
    {
        char bran[10] = "Bangalore";//compilation error
        int bpin = 431;
    };

    struct headoff h = {"Chennai", 01 };
    struct branch b;
    printf("HO-%s\n hpin- %d",h.head,h.hpin);
    printf("BO- %s\n bpin- %d", b.bran, b.bpin);
    return 0;   
}