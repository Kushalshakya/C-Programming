// Write a C program to find maximum and minimum between two numbers using functions.

#include<stdio.h>
int minMax(int a, int b) {
    return a > b ? printf("%d is max and %d is min", a,b) : printf("%d is max and %d is min", b,a);
}
int main() {
    int a,b;
    printf("Enter two numbers:");
    scanf("%d%d", &a, &b);
    minMax(a,b);
    return 0;
}