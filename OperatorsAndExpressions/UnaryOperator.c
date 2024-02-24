/* John is a manager at a warehouse where they handle packages of different weights. Each package has a weight associated with it. John needs to manage the weight of these packages efficiently. Sometimes, he needs to increase or decrease the weight of a package by a fixed amount.
Suppose John needs to increase the weight of a package by 2 kg. If the original weight of the package is 15 kg, what would be the new weight after applying the unary plus operator? */

#include<stdio.h>
int main() {
    int totalWeight = 15, packageWeight, newWeight;
    printf("Enter the packageWeight: ");
    scanf("%d", &packageWeight);
    printf("New weight after applying unary plus operator is %d",newWeight = totalWeight + packageWeight);
}