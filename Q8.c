#include <stdio.h>
#include <math.h>

int main() {
    float P, r, EMI, A;
    int t, type;

    printf("Enter loan amount: ");
    scanf("%f", &P);

    printf("Enter time in years: ");
    scanf("%d", &t);

    printf("Enter rate of interest (in %%): ");
    scanf("%f", &r);

    printf("Enter type of interest (1 = Simple, 2 = Compound): ");
    scanf("%d", &type);

    if (type == 1) {
        // Simple Interest
        A = P + (P * r * t) / 100;
        EMI = A / (t * 12);
        printf("Simple Interest EMI = %.2f\n", EMI);
    } 
    else if (type == 2) {
        // Compound Interest
        A = P * pow((1 + r / 100), t);
        EMI = A / (t * 12);
        printf("Compound Interest EMI = %.2f\n", EMI);
    } 
    else {
        printf("Invalid interest type.\n");
    }

    return 0;
}
