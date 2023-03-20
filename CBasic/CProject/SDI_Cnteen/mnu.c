void meanu(){
    int choice;
    while (1)
    {
    printf("Welcome to SDI Canteen!\n");
    printf("1. Breakfast: \n");
    printf("2. Lunch: \n");
    printf("3. Snacks: \n");
    printf("4. Dinner: \n");
    printf("5. exit\n");

    printf("Select your foodType: \n");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        Breakfast();
        break;

    case 2:
        Lunch();
        break;  

    case 3:
        Snacks();
        break;      
    
    case 4:
        Dinner();
        break;

    case 5:
        exit(0);
           
    default:
        printf("Invalid choice.\n");
        
    }
    }
    return;
}