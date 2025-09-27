#include <stdio.h>

int main(){
    int mainchoice, subchoice;
    float area, perimeter, height, base, a, b, c, radius;

    printf("---Geometry Calculator--- \n");
    printf("1. Triangle \n");
    printf("2. Circle \n");
    printf("3. Rectangle \n");
    printf("Select your shape : ");
    scanf("%d", &mainchoice);

    switch (mainchoice)
    {
    case 1: // Triangle
        printf("You selected Triangle.\n");
        printf("1. Area \n");
        printf("2. Perimeter \n");
        printf("Enter your choice : ");
        scanf("%d", &subchoice);

        switch (subchoice)
        {
        case 1:
            printf("Enter the height of triangle : ");
            scanf("%f", &height);
            printf("Enter the base of triangle : ");
            scanf("%f", &base);
            area = 0.5 * base * height;
            printf("The area of triangle is %.2f\n", area);
            break;
        case 2:
            printf("Enter the three sides of triangle : ");
            scanf("%f %f %f", &a, &b, &c);
            perimeter = a + b + c;
            printf("The perimeter of triangle is %.2f\n", perimeter);
            break;
        default:
            printf("Invalid choice of function\n");
            break;
        }
        break;

    case 2: // Circle
        printf("You selected Circle.\n");
        printf("1. Area \n");
        printf("2. Perimeter \n");
        printf("Enter your choice : ");
        scanf("%d", &subchoice);

        switch (subchoice)
        {
        case 1:
            printf("Enter the radius of circle : ");
            scanf("%f", &radius);
            area = 3.14 * radius * radius;
            printf("The area of circle is %.2f\n", area);
            break;
        case 2:
            printf("Enter the radius of circle : ");
            scanf("%f", &radius);
            perimeter = 2 * 3.14 * radius;
            printf("The perimeter of circle is %.2f\n", perimeter);
            break;
        default:
            printf("Invalid choice of function\n");
            break;
        }
        break;

    case 3: // Rectangle
        printf("You selected Rectangle.\n");
        printf("1. Area \n");
        printf("2. Perimeter \n");
        printf("Enter your choice : ");
        scanf("%d", &subchoice);

        switch (subchoice)
        {
        case 1:
            printf("Enter the height of rectangle : ");
            scanf("%f", &height);
            printf("Enter the base of rectangle : ");
            scanf("%f", &base);
            area = base * height;
            printf("The area of rectangle is %.2f\n", area);
            break;
        case 2:
            printf("Enter the two sides of rectangle : ");
            scanf("%f %f", &a, &b);
            perimeter = (2*a) + (2*b);
            printf("The perimeter of rectangle is %.2f\n", perimeter);
            break;
        default:
            printf("Invalid choice of function\n");
            break;
        }
        break;

    default:
        printf("Invalid choice of shape\n");
        break;
    }

    return 0;
}
