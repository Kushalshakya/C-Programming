#include<stdio.h>

int isPrime(int num){
    int i;
    if (num < 2) return 0;
    for(i=2; i * i <= num; i++){
        if(num % i == 0) return 0;
    }
    return 1;
}

int main(){
    int num;
    FILE *inputFile, *outputFile;
    inputFile = fopen("num.txt", "r");
    outputFile = fopen("Prime.txt", "w");

    while(fscanf(inputFile, "%d", &num) != EOF){
        if(isPrime(num)){
            fprintf(outputFile, "%d\n", num);
        }
    }

    fclose(inputFile);
    fclose(outputFile);
    
    return 0;
}