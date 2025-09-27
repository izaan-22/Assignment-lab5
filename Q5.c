#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c, d, root1, root2;
    printf("Enter First coefficent : ");
    scanf("%f", &a);
    printf("Enter Second coefficent : ");
    scanf("%f", &b);
    printf("Enter Third coefficent : ");
    scanf("%f", &c);

    d = (b*b) - (4*a*c);
    if (d > 0){
        root1 = ((-b) + sqrt(d)) / (2*a);
        root2 = ((-b) - sqrt(d)) / (2*a);
        printf("Roots are real and distinct. \n");
        printf("The roots are %.2f", root1);
        printf( "and %.2f \n", root2);
    } else if (d == 0){
        root1 = ((-b) + sqrt(d)) / (2*a);
        printf("Roots are equal and real \n");
        printf("The root is %.2f", root1);
    } else {
        float real = -b / (2*a);
        float imag = sqrt(-d) / (2*a);
        printf("Roots are imaginary. \n");
        printf("The roots are  %.2f + %.2fi ",real,imag);
        printf("and %.2f - %.2fi \n",real,imag);
    }
    return 0;
}