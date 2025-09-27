#include <stdio.h>

int main(){
    int mainchoice, subchoice;

    printf("Library Management System \n");
    printf("1. Books \n");
    printf("2. Magazines \n");
    printf("Enter your choice : ");
    scanf("%d", &mainchoice);

    switch(mainchoice){
        case 1:
            printf("You selected books.  \n");
            printf("1. Issue Book \n");
            printf("2. Return Book \n");
            printf("Enter your choice : ");
            scanf("%d", &subchoice);

            switch(subchoice){
                case 1:
                    printf("Book Issued. \n");
                    break;
                case 2:
                    printf("Book Returned. \n");
                    break;
                default:
                    printf("Invalid choice for books \n");
            }
            break;
        case 2:
            printf("You selected Magazines.  \n");
            printf("1. Issue magazine \n");
            printf("2. Return magazine \n");
            printf("Enter your choice : ");
            scanf("%d", &subchoice);

            switch(subchoice){
                case 1:
                    printf("Magazine Issued. \n");
                    break;
                case 2:
                    printf("Magazine Returned. \n");
                    break;
                default:
                    printf("Invalid choice for magazines \n");
            }
            break;
        default:
            printf("Invalid main choice \n");
    } 
    
    return 0;
}