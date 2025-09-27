#include <stdio.h>

int main() {
    int age, movie;
    const char *ticket;
    const char *movieName;

    printf("--- Movie Ticket Booking ---\n");
    printf("Enter your age: ");
    if (scanf("%d", &age) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    /* decide ticket type using if-else */
    if (age < 0) {
        printf("Age cannot be negative.\n");
        return 1;
    }
    if (age < 12)
        ticket = "Child Ticket";
    else if (age <= 60)
        ticket = "Adult Ticket";
    else
        ticket = "Senior Citizen Ticket";

    /* select movie using switch-case */
    printf("Select movie:\n");
    printf("1. Action\n");
    printf("2. Comedy\n");
    printf("3. Horror\n");
    printf("Enter your choice (1-3): ");
    if (scanf("%d", &movie) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    switch (movie) {
        case 1:
            movieName = "Action";
            break;
        case 2:
            movieName = "Comedy";
            break;
        case 3:
            movieName = "Horror";
            break;
        default:
            movieName = NULL;
            break;
    }

    if (movieName != NULL)
        printf("You booked a %s for %s movie.\n", ticket, movieName);
    else
        printf("Invalid movie selection.\n");

    return 0;
}
