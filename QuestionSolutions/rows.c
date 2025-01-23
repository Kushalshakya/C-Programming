// WAP to calculate the sum of rows of a matrix.
#include<stdio.h>
int main(){
    int i, j, arr[3][3], rows[3];
    printf("Enter Matrix");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){   
            scanf("%d", &arr[i][j]);
        }
    }
    
    for(i=0; i<3; i++){
        rows[i] = 0;
        for(j=0; j<3; j++){
           rows[i] += arr[i][j];
        }
    }
    for(i=0; i<3; i++){
        printf("%d \t", rows[i]);
    }
    return 0;
}