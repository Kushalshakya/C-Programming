#include<stdio.h>
int prime(int num){
	int i,count=0;
	for(i=1; i<=num; i++){
		if(num % i == 0){
			count++;
		}
	}
	return count <= 2 ? printf("Number is Prime") : printf("Number is not prime");
}

int armstrong(int num){
    int originalNum = num, remainder, cube;
    while(num != 0){
        remainder = num % 10;
        cube += remainder * remainder * remainder;
        num = num / 10;
    }
    return cube == originalNum ? printf("Number is Armstrong") : printf("Number is not Armstrong");
}
int evenOrOdd(int num){
	return num % 2 == 0 ? printf("Even") : printf("Odd");
}

int perfectNumber(int num){
	int i, rem, sum=0;
	for(i=1; i<num; i++){
        rem = num % i;
        if(rem == 0){
            sum += i;
        }
	}
	return sum == num ? printf("Perfect Square") : printf("Not a Perfect Square");
}


int main() {
	int choice, num;
	char repeat;
	do{
    	printf("What do you want?\n1.Check Prime Number\n2.Check Armstrong Number\n3.Even Or Odd\n4.Perfect Number\n");
    	scanf("%d", &choice);
    	printf("Enter a number:");
        scanf("%d", &num);
    	switch (choice) {
    		case 1:
    			prime(num);
    			break;	
    		case 2:
    			armstrong(num);
    			break;
    		case 3:
    			evenOrOdd(num);
    			break;
    		case 4:
    			perfectNumber(num);
    			break;
    		default:
    			break;
    	}
        printf("\nDo You want to continue y or n: ");
    	scanf(" %c", &repeat);
	} while(repeat == 'Y' || repeat == 'y');

	return 0;
}