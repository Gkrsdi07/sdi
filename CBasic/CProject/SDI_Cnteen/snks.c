void Snacks(){
    int choice;
    printf("Enter Day(1 to 7): \n");
    printf("1. Monday: \n");
    printf("2. Tuesday: \n");
    printf("3. Wednesday: \n");
    printf("4. Thursday: \n");
    printf("5. Friday: \n");
    printf("6. Saturday: \n");
    printf("7. Sunday: \n");
    scanf("%d",&choice);

    switch (choice)
    {
    printf("Compulsory Item(Everyday): Tea/Coffee");    
    case 1:
        printf("Puri(5 Nos) & Allo Dum, Banana(One Standard Size):   Rs.: 15\n");
        break;

    case 2:
        printf("Iddly(4 Nos), Sambar, Coconut Chunty and Banana(One Standard Size):  Rs.: 15\n");
        break;    
    
    case 3:
        printf("Suji/Rava Upama and Ghuguni/Yellow Muttor Curry:   Rs.: 15\n");
        break;

    case 4:
        printf("Utthapam(3 Nos), Sambar, coconut & peanut Chuteny and Banana(One Standard Size):  Rs.: 15\n");
        break;

    case 5:
        printf("Plain Paratha(3 nos, Standard Size) and kala chana curry:  Rs.: 15\n");
        break;

    case 6:
        printf("Chakuli(3 Nos), Ghuguni, Banana(One Standard Size):  Rs.: 15\n");
        break;

    case 7:
        printf("Chhole Bature(2 nos. big size), Pickle:  Rs.: 15\n");
        break;                
    default:
        printf("Please Inter a valid Option\n");
        break;
    }
    return;
}