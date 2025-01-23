// WAP to find sum of all elements of matrix.
#include<stdio.h>
int main(){
    int i,j, arr[3][3], sum=0;
    printf("Enter matrix: ");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){   
            scanf("%d", &arr[i][j]);
        }
    }

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){   
            sum += arr[i][j];
        }
    }
    printf("Sum of matrix is: %d", sum);
    return 0;
}