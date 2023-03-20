void Pmarks(){
    int P;
    printf("Eneter Your Physics Marks(Between 0 to 100): \n");
    scanf("%d",&P);
    if(P>=90 && P<=100){
        printf("O\n");
    } else if(P>=80 && P<90){
        printf("E\n");
    } else if (P>=70 && P<80)
    {
        printf("A\n");
    } else if (P>=60 && P<70)
    {
        printf("B\n");
    } else if (P>=50 && P<60)
    {
        printf("C");
    } else if(P>=35 && P<50){
        printf("D\n");
    } else{
        printf("Fail\n");
    }
    return;   
}