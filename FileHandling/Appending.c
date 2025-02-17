#include<stdio.h>
int main(){
    char name[20];
    FILE *fp;
    fp = fopen("File.txt", "a");
    printf("Enter a details to write: ");
    scanf("%s", name);
    fprintf(fp, "Name: %s\n", name);
    return 0;
}