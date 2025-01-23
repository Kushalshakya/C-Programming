// WAP to calculate the sum of column of a matrix.
#include<stdio.h>
int main(){
    int i, j, arr[3][3], columns[3];
    printf("Enter Matrix");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){   
            scanf("%d", &arr[i][j]);
        }
    }

    for(i=0; i<3; i++){
        columns[i] = 0;
        for(j=0; j<3; j++){
            columns[i] += arr[j][i];
        }
    }
    for(i=0; i<3; i++){
        printf("%d \t", columns[i]);
    }
    return 0;
}