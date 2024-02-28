#include<stdio.h>

int main() {
    int i;
    // [3] -> rows, [2] -> columns, [20] -> size
    char products_and_price[3][2][20];
    
    for(i=0; i<3; i++){
        printf("Enter Name of Product:");
        scanf("%s", products_and_price[i][0]);
        printf("Enter Price of Product:");
        scanf("%s", products_and_price[i][1]);
    }
    for(i=0; i<3; i++){
        printf("%-10s%-10s\n",products_and_price[i][0], products_and_price[i][1]);
    }
    return 0;
}