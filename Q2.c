#include <stdio.h>

int main(){
    int cost, units, units7, units10, units15;
    printf("Enter the number of units : ");
    scanf("%d", &units);
    if (units <= 100){
        cost = units * 5;
    } else if(units <= 200){
        units7 = units - 100;
        cost = (units7 * 7) + 500;
    } else if(units <= 300){
        units10 = units - 200;
        cost = (units10 * 10) + 1200;
    } else {
        units15 = units - 300;
        cost = (units15 * 15) + 2200;
    }
    printf("Your final electricity bill is %d \n", cost);
    return 0;
}