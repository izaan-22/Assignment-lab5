#include <stdio.h>

int main(){
    int mainchoice, subchoice;
    
    printf("Food Ordering System \n");
    printf("1. Fast Food \n");
    printf("2. Drinks \n");
    printf("Enter your choice : ");
    scanf("%d", &mainchoice);

    switch (mainchoice)
    {
    case 1:
        printf("You selected Fast Food. \n");
        printf("1. Burger and fries\n");
        printf("2. Pizza and garlic bread\n");
        printf("3. Pasta and sauce\n");
        printf("Enter your choice : ");
        scanf("%d", &subchoice);

        switch (subchoice)
        {
        case 1:
            printf("You selected Burger and Fries, processing your order. \n");
            break;
        case 2:
            printf("You selected Pizza and garlic bread, processing your order. \n");
            break;
        case 3:
            printf("You selected Pasta and Sauce, processing your order, \n");
            break;
        default:
            printf("Invalid choice of order. \n");
            break;
        }

        break;
    case 2:
        printf("You selected Drinks. \n");
        printf("1. Cold Drink\n");
        printf("2. Shakes\n");
        printf("3. Orange Juice\n");
        printf("Enter your choice : ");
        scanf("%d", &subchoice);

        switch (subchoice)
        {
        case 1:
            printf("You selected Cold Drink, processing your order. \n");
            break;
        case 2:
            printf("You selected Shake, processing your order. \n");
            break;
        case 3:
            printf("You selected Orange juice, processing your order. \n");
            break;
        default:
            printf("Invalid choice of order. \n");
            break;
        }

        break;
    
    default:
        printf("Invalid main choice of order. \n");
        break;
    }
    return 0;
}