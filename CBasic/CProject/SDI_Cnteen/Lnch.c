void Lunch(){
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
    printf("Compulsory Item(Everyday): Rice, Dal(Arhar/Moong in alternate Day), Salad, Hari Mirch and Pickle");    
    case 1:
        printf("Aloo Chhole Curry, Mix Veg Fry, Gulab Jamun, Fryms:   Rs.: 45\n");
        break;

    case 2:
        printf("Alu Lobia masala Curry, Alu & Cauliflower Fry, Papad and sweet Boondi:  Rs.: 45\n");
        break;    
    
    case 3:
        printf("Chicken Curry/Mushroom(for Veg), Alu Jeeta Fry, Fryms:   Rs.: 45\n");
        break;

    case 4:
        printf("Mix Veg Curry, Aloo Potola Fry, Papad and sweet kheer:  Rs.: 45\n");
        break;

    case 5:
        printf("Fish Curry/Sahi Paner(for veg), Mix Veg Fry & Rasogola, Fryms:  Rs.: 45\n");
        break;

    case 6:
        printf("Aloo Soya Muttor Curry, Allo Bhindi Fry, and Dahi Bundi, Papad:  Rs.: 45\n");
        break;

    case 7:
        printf("Egg Curry/Paneer Matar(for Veg), and Mix Veg Fry, Sweet Kheer, fryms:  Rs.: 45\n");
        break;                
    default:
        printf("Please Inter a valid Option\n");
        break;
    }
    return;
}