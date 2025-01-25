// WAP to read P*Q matrix of integers and find the largest integer of each row and display it.
#include<stdio.h>
int main(){
    int a[3][3], i, j, pMatrix, qMatrix;
    printf("Enter p matrix: ");
    scanf("%d", &pMatrix);
    printf("Enter q matrix: ");
    scanf("%d", &qMatrix);

    int largest[pMatrix];

    printf("Enter matrix values: ");
    for(i=0; i<pMatrix; i++){
        for(j=0; j<qMatrix; j++){
            scanf("%d", &a[i][j]);
        }
    }
    
    for(i=0; i<pMatrix; i++){
        for(j=1; j<qMatrix; j++){
            if(a[i][j] > a[i][0]){
                largest[i] = a[i][j];
            }
        }
    }
    for(i=0; i<pMatrix; i++){
        printf("%d \t", largest[i]);
    }
}