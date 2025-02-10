/* Create a structure named Book with members Book_Name, Price and Author_Name, then take input for 10 records of Book and print the name of authors having the price of book greater than 1000.
*/

#include<stdio.h>
struct Book{
    char Book_Name[100];
    int Price;
    char Author_Name[30];
};
int main(){
    struct Book b[10];
    int i;
    for(i=0; i<2; i++){
        printf("Enter BookName, Price and AuthorName: ");
        scanf("%s%d%s", b[i].Book_Name, &b[i].Price, b[i].Author_Name);
    }

    for(i=0; i<10; i++){
        if(b[i].Price > 1000){
            printf("Author Name: %s\n",b[i].Author_Name);
        }
    }
    return 0;
}