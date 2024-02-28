#include<stdio.h>

struct store {
    char products[50];
};

int main() {
    int i;
    struct store s[3];
    for(i=0; i<3; i++){
        printf("Enter item %d name:\n",i);
        scanf("%s", s[i].products);
    }

    for(i=0; i<3; i++){
        printf("Values are:%s\n", s[i].products);
    }
    return 0;
}