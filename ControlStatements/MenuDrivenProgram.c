#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include "ConditionalStatement.c"
#include "AddExpenses.c"
extern int totalMoney;

int main() {
    int choice;
    while(1) {
        printf("\nTotal Money You Have: %d\nSelect options:\n1.Spend Money\n2.Add Expenses\n", totalMoney);
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                spendMoney();
                break;
            case 2:
                addExpenses();
                break;
            default:
                exit(0);
        }
    }
    return 0;
}