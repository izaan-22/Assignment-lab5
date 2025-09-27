#include <stdio.h>

int main() {
    int department, course;

    printf("---Course Registration System--- \n");
    printf("1. Computer Science \n");
    printf("2. Electrical Engineering \n");
    printf("3. Bachelor of Business Administration \n");
    printf("Enter your department choice: ");
    scanf("%d", &department);

    switch (department) {
    case 1:
        printf("You chose Computer Science \n");
        printf("1. CS101 - Introduction to Programming \n");
        printf("2. CS102 - Data Structures \n");
        printf("3. CS103 - Database Systems \n");
        printf("Choose your desired course: ");
        scanf("%d", &course);

        switch (course) {
        case 1:
            printf("You chose CS101 - Introduction to Programming\n");
            break;
        case 2:
            printf("You chose CS102 - Data Structures\n");
            break;
        case 3:
            printf("You chose CS103 - Database Systems\n");
            break;
        default:
            printf("Invalid choice of course\n");
            break;
        }
        break;

    case 2:
        printf("You chose Electrical Engineering \n");
        printf("1. EE101 - Circuit Analysis \n");
        printf("2. EE102 - Digital Logic Design \n");
        printf("3. EE103 - Signals and Systems \n");
        printf("Choose your desired course: ");
        scanf("%d", &course);

        switch (course) {
        case 1:
            printf("You chose EE101 - Circuit Analysis\n");
            break;
        case 2:
            printf("You chose EE102 - Digital Logic Design\n");
            break;
        case 3:
            printf("You chose EE103 - Signals and Systems\n");
            break;
        default:
            printf("Invalid choice of course\n");
            break;
        }
        break;

    case 3:
        printf("You chose Bachelor of Business Administration \n");
        printf("1. BBA301 - Principles of Management \n");
        printf("2. BBA302 - Marketing Fundamentals \n");
        printf("3. BBA303 - Financial Accounting \n");
        printf("Choose your desired course: ");
        scanf("%d", &course);

        switch (course) {
        case 1:
            printf("You chose BBA301 - Principles of Management\n");
            break;
        case 2:
            printf("You chose BBA302 - Marketing Fundamentals\n");
            break;
        case 3:
            printf("You chose BBA303 - Financial Accounting\n");
            break;
        default:
            printf("Invalid choice of course\n");
            break;
        }
        break;

    default:
        printf("Invalid department choice\n");
        break;
    }

    return 0;
}
