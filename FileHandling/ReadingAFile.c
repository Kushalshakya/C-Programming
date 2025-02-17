#include<stdio.h>
int main(){
    FILE *fp;
    fp = fopen("readThis.txt", "r");
    char ch;
    char str[1024];
    
    // Reading Each Character Individually
    while((ch = fgetc(fp)) != EOF){
        printf("%c \a", ch);
    }

    // Reading As String Chunks
    // while(fgets(str, 1024, fp) != NULL){
    //     printf("%s", str);
    // }

    fclose(fp);
    return 0;
}