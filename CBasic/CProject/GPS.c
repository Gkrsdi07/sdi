#include<stdio.h>

int main(){
    char gps[] = {"$GPGGA,181908.00,3404.7041778,N,07044.3966270,W,4,13,1.00,495.144,M,29.200,M,0.10,0000,*40"};
    int i;
  
   //N denotes north latitude.
   printf("north latitude is: ");
    for(i=17;i<31;i++){
        printf("%c",gps[i]);
    }
    printf("\n\n");

    //W denotes west longitude.
    printf("west longitude is: ");
    for (i = 33; i < 47; i++)
    {
        printf("%c",gps[i]);
    }
    printf("\n\n");
    return 0;
}