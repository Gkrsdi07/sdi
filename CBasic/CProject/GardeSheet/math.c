void Mmarks(){
    int M;
    printf("Eneter Your Mathematics Marks(Between 0 to 100): \n");
    scanf("%d",&M);
    if(M>=90 && M<=100){
        printf("O\n");
    } else if(M>=80 && M<90){
        printf("E\n");
    } else if (M>=70 && M<80)
    {
        printf("A\n");
    } else if (M>=60 && M<70)
    {
        printf("B\n");
    } else if (M>=50 && M<60)
    {
        printf("C");
    } else if(M>=35 && M<50){
        printf("D\n");
    } else{
        printf("Fail\n");
    }
    return;   
}