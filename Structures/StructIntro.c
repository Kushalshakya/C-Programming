#include<stdio.h>
struct student{
    int rollno;
    char name[20];
    char address[30];
};

int main(){
    struct student s[5];
    int i;
    printf("Enter Rollno, Name and Address of the Student: ");
    for(i=0; i<2; i++){
        scanf("%d%s%s", &s[i].rollno, s[i].name, s[i].address);
    }

    for(i=0; i<2; i++){
        printf("RollNo: %d\tName: %s\tAddress: %s\n", s[i].rollno, s[i].name, s[i].address);
    }
    return 0;
}