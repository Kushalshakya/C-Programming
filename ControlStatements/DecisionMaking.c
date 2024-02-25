#include<stdio.h>
#include<string.h>

int totalAmount;
int addExpenses() {
   char choice, itemName[30];
   int expenseAmount, itemTotalAmount=0;
   char storeExpenses[30] = "";
   do{
      printf("Enter amount you want to spend:");
      scanf("%d", &expenseAmount);
      printf("What is the item name you bought:");
      scanf("%s", itemName);

      itemTotalAmount += expenseAmount;
      strcat(storeExpenses, itemName);
      strcat(storeExpenses, " ");
      
      // Fix the totalAmount deduction issue
      totalAmount -= itemTotalAmount;

      printf("Do you want to continue (y or n)?");
      scanf(" %c", &choice);
      if(choice == 'Y' || choice == 'y'){
        printf("You spended $%d on %s\n", expenseAmount, storeExpenses);
      }
   }while(choice == 'Y' || choice == 'y');  
}