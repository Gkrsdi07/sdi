void Cmarks(){
    int C;
    printf("Eneter Your Chemistry Marks(Between 0 to 100): \n");
    scanf("%d",&C);
    if(C>=90 && C<=100){
        printf("O\n");
    } else if(C>=80 && C<90){
        printf("E\n");
    } else if (C>=70 && C<80)
    {
        printf("A\n");
    } else if (C>=60 && C<70)
    {
        printf("B\n");
    } else if (C>=50 && C<60)
    {
        printf("C");
    } else if(C>=35 && C<50){
        printf("D\n");
    } else{
        printf("Fail\n");
    }
    return;   
}