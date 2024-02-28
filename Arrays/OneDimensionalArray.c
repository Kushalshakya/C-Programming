#include<stdio.h>

int main() {
    int i;
    char product[3][50];

    for(i=0; i<3; i++){
        printf("Enter value for %d item: ",i);
        scanf("%s", product[i]);
    }

    for(i=0; i<3; i++){
        printf("%s", product[i]);
    }

    return 0;
}