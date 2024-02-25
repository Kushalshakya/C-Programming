#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include "ConditionalStatement.c"
#include "DecisionMaking.c"

extern int totalMoney;

int main() {
    int choice;
    while(1) {
        printf("\nTotal Money You Have: %d\nSelect options:\n1.Spend Money\n2.Add Expenses\n3.Exit\n", totalMoney);
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                spendMoney();
                break;
            case 2:
                addExpenses();
                break;
            default:
                printf("Byee...");
                exit(0);
        }
    }
    return 0;
}