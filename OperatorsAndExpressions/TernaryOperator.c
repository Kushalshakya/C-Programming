/* Sarah is deciding whether to go for a walk or stay indoors based on the weather forecast. If it's sunny, she'll go for a walk; otherwise, she'll stay indoors and read a book.
If the weather forecast indicates that it's sunny, what will Sarah decide to do? */

#include<stdio.h>
#include<string.h>
int main() {
    int i;
    char weather[20], *forecast[] = {"sunny", "rainy", "mild"};
    for(i=0; i<3; i++){
        printf("%s\t", forecast[i]);
    }
    printf("\nHow is the weather? ");
    scanf("%s", weather);

    printf(strcmp(weather, "sunny") == 0 ? "It is sunny better not got for a walk\n" : "It's not sunny, so feel free to go for a walk.\n");
}