/* Sarah is a teacher who wants to track her students' grades. She wants to identify which students scored higher than 80% in their last math test.
If Sarah's student Alice scored 85%, Bob scored 78%, and Emma scored 92%, who among them scored higher than 80% in the math test?*/

#include<stdio.h>
int main() {
    int SarahExpectation = 80;
    int AlicePercentage = 85, BobPercentage = 78, EmmaPercentage = 92;
    if(AlicePercentage > 80){
        printf("Alice got %d which is higher than %d\n",AlicePercentage, SarahExpectation);
    }
    if(BobPercentage > 80){
        printf("Bob got %d which is higher than %d\n",BobPercentage, SarahExpectation);
    }
    if(EmmaPercentage > 80){
        printf("Emma got %d which is higher than %d\n",EmmaPercentage, SarahExpectation);
    }
}