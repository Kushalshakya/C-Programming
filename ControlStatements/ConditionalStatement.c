#include<stdio.h>
int totalMoney = 500;
int spendMoney() {
    int limitAmount = 100, userAmount, temp;
    printf("Enter the amount you want to spend: ");
    scanf("%d", &userAmount);
    if(userAmount < limitAmount && userAmount < totalMoney) {
        if(temp < limitAmount) {
            printf("You've spended %d amount on groceries today\n", userAmount);
            totalMoney -= userAmount;
            temp += userAmount;
        }
        else{
            printf("You have exceeded today's limit $%d\n", limitAmount);
        }
    }
    else{
        printf("Please Consider exploring budget friendly alternatives for your next purchase\n");
    }
}