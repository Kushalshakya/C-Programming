# Tracking Expenses
## John is a financial advisor who helps his clients manage their expenses effectively. He's developing a program to assist them in analyzing their spending habits. The program prompts users to input their daily expenses and categorizes them into different spending categories. John wants to incorporate various decision-making and control flow mechanisms to enhance the program's functionality.

Qn1. If the user spends more than $100 on groceries in a day, the program should display a message encouraging them to consider budget-friendly options.
- Example: If the user spent $120 on groceries, the program should display: "You've spent a significant amount on groceries today. Consider exploring budget-friendly alternatives for your next purchase."

Qn2. Allow users to input their expenses until they decide to stop entering data. Once they indicate they are done, the program should display a summary of their total expenses and average spending per category.
- Example: The user inputs expenses for groceries, utilities, and entertainment. When they're finished, they enter a command to stop. The program then calculates and displays the total expenses and average spending for each category.

Qn3. If the user indicates they want to exit the program, the program should terminate gracefully.
- Example: After reviewing their expenses, the user decides they're done and enters a command to exit the program. The program then displays a farewell message and exits.

Qn4. If the user enters an invalid expense amount (e.g., a negative value), the program should prompt them to re-enter the expense instead of including it in the analysis.
- Example: If the user mistakenly enters "-$20" as their grocery expense, the program detects this and prompts them to re-enter a valid amount.