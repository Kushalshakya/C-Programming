// Check if a matrix are identical. (a[m][n] == b[m][n] ?)
#include<stdio.h>
int main(){
    int i, j, a[3][3], b[3][3], count=0;
    printf("Enter a 3x3 matrix A: ");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n Enter a 3x3 matrix B: ");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            scanf("%d", &b[i][j]);
        }
    }
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            if(a[i][j] != b[i][j]){
                count++;
                break;
            }
        }
        if(count > 0){
            break;
        }
    }
    if(count == 0){
        printf("The matrix are identical");
    } else{
        printf("The matrix are not identical");
    }
    return 0;
}