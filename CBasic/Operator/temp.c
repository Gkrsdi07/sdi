#include<stdio.h>

int main(){
    int sun,mon,tue,wed,thr,fri,sat,todaytemp;
    //printf("Eneter temperature in degree celcious: \n");
    //scanf("%d%d%d%d%d%d%d",&sun,&mon,&tue,&wed,&thr,&fri,&sat);

    printf("Enter Today Tem in degree celcious: \n");
    scanf("%d",&todaytemp);
    if(todaytemp>=12 && todaytemp<=20){
        printf("Today Weather is Cloudy\n");
    } else if(todaytemp>20 && todaytemp <=40){
        printf("Today temp is Sunny: \n");
    } else if(todaytemp > 40){
        printf("Too Hot\n");
    } else{
        printf("Raning: \n");
    }

    return 0;
}