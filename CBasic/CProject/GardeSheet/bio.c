void Bmarks(){
    int B;
    printf("Eneter Your Biology Marks(Between 0 to 100): \n");
    scanf("%d",&B);
    if(B>=90 && B<=100){
        printf("O\n");
    } else if(B>=80 && B<90){
        printf("E\n");
    } else if (B>=70 && B<80)
    {
        printf("A\n");
    } else if (B>=60 && B<70)
    {
        printf("B\n");
    } else if (B>=50 && B<60)
    {
        printf("C");
    } else if(B>=35 && B<50){
        printf("D\n");
    } else{
        printf("Fail\n");
    }
    return;
}