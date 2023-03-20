#include<stdio.h>

int main(){
    int n, i, sum=0, larg=0, low=0, j;
    scanf("%d",&n);
    float avrg;
    int a[n];
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
        sum+=a[i];
    }
    printf("%d\n",sum);
    avrg = (sum/n);
    printf("%.2f\n",avrg);

    /* 
    for(i=0; i<n; i++){
        for(j=0; j<n-1; j++){
            if(a[j])
        }
    }
    */
   return 0;
}