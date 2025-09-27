#include <stdio.h>

int main(){
    int num1, num2, num3;
    printf("Enter your first number : ");
    scanf("%d",&num1);
    printf("Enter your second number : ");
    scanf("%d",&num2);
    printf("Enter your third number : ");
    scanf("%d",&num3);
    if(num1 > num2 && num1 < num3){
        printf("First number is the second largest");
    } else if(num1 > num3 && num1 < num2){
        printf("First number is the second largest");
    } else if(num2 > num3 && num2 < num1){
        printf("Second number is the second largest");
    }if(num2 > num1 && num2 < num3){
        printf("Second number is the second largest");
    } else if(num3 > num1 && num3 < num2){
        printf("Third number is the second largest");
    }else if(num3 > num2 && num3 < num1){
        printf("Third number is the second largest");
}return 0;
}       