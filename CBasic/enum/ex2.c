#include<stdio.h>
#include<stdlib.h>

int main(){
    int a,b,cho;

    enum{M800 = 17, zen, Waganor = 15, swift = 16, Alto = 18};

    printf("\nMaruti Models\n");
    printf("\n1. 800\n");
    printf("\n2. Zen\n");
    printf("\n3. Waganor\n");
    printf("\n4. Swift\n");
    printf("\n5. Alto\n");
    printf("\nEnter Your Choice: ");
    scanf("%d",&cho);

    switch (cho)
    {
    case 1:
        printf("\nMilage is: %d\n",M800);
        break;
    case 2:
        printf("\nMilage is: %d\n",zen);
        break;
    case 3:
        printf("\nMilage is: %d\n",Waganor);   
        break;
    case 4:
        printf("\nMilage is: %d\n",swift);
        break;         
    case 5:
        printf("\nMilage is: %d\n",Alto);
        break;
    default:
        printf("\nInvalid Option\n");
        break;
    }
    return 0;
}