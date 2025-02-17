// gcc WritingAFile.c -o output.exe && output.exe
#include<stdio.h>
int main(){
    char name[20];
    FILE *fp;
    fp = fopen("File.txt", "w");
    printf("Enter a details to write: ");
    scanf("%s", name);
    fprintf(fp, "Name: %s", name);
    return 0;
}