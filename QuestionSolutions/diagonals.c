#include<stdio.h>
int main(){
    int i, j, arr[3][3], diag=0;
    printf("Enter matrix: ");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){   
            scanf("%d", &arr[i][j]);
        }
    }

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            if (i == j){
                diag += arr[i][j];
            }
            if( (i + j) == 2){
                diag += arr[i][j];
            }
        }
    }

    printf("%d", diag);
    return 0;
}