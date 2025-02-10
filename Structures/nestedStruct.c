#include<stdio.h>
struct Name{
    char fname[20], lname[20];
};
struct Student{
    int studentRollNo;
    struct Name n;
};

int main(){
    struct Student s[2];
    int i;
    for(i=0; i<2; i++){
        printf("Enter Student RollNo, FirstName and LastName: ");
        scanf("%d%s%s", &s[i].studentRollNo, s[i].n.fname, s[i].n.lname);
    }

    for(i=0; i<2; i++){
        printf("%d%s%s \n", s[i].studentRollNo, s[i].n.fname, s[i].n.lname);
    }
    return 0;
}