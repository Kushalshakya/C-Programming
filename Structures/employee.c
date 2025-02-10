/* Create a structure “Employee” having Name, Address, Salary, and Age as member functions. Display the name of the employee having aged between 40 and 50 are living in Kathmandu.
*/

#include<stdio.h>
#include<string.h>
struct Employee{
    char Name[30];
    char Address[40];
    int Salary;
    int Age;
};
int main(){
    struct Employee e[3];
    int i;
    for(i=0; i<3; i++){
        printf("Enter Name, Address, Salary and Age: ");
        scanf("%s%s%d%d", e[i].Name, e[i].Address, &e[i].Salary, &e[i].Age);
    }

    for(i=0; i<3; i++){
        if(e[i].Age >= 40 && e[i].Age <= 50 && strcmp(e[i].Address, "Kathmandu") == 0){
            printf("%s", e[i].Name);
        }
    }
    return 0;
}