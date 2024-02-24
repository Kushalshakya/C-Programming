/* Emily is a cashier at a grocery store. She needs to update the inventory count each time an item is sold.
If Emily sold 10 apples from the inventory, how should she decrement the count using the decrement operator? */

#include<stdio.h>
int main() {
    int soldApples = 10, totalApple;
    printf("Enter total number of Apples:");
    scanf("%d", &totalApple);
    while(soldApples > 0){
        totalApple--;
        soldApples--;
    }
    printf("Left Stock is %d", totalApple);
    return 0;
}