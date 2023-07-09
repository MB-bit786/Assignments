/*Write a program of structure for five employee that provides the following 
information print and display empno, empname, address and age*/
#include"header.h"

struct Employee {
    int empno;
    char empname[50];
    char address[100];
    int age;
};

int main() {
    struct Employee employees[5];
    
    // Input employee information
    for (int i = 0; i < 5; i++) {
        printf("Enter details for Employee %d:\n", i+1);
        
        printf("Employee Number: ");
        scanf("%d", &employees[i].empno);
        
        printf("Employee Name: ");
        scanf(" %[^\n]", employees[i].empname);
        
        printf("Address: ");
        scanf(" %[^\n]", employees[i].address);
        
        printf("Age: ");
        scanf("%d", &employees[i].age);
        
        printf("\n");
    }
    
    // Print employee information
    printf("Employee Information:\n");
    for (int i = 0; i < 5; i++) {
        printf("Employee %d:\n", i+1);
        printf("Employee Number: %d\n", employees[i].empno);
        printf("Employee Name: %s\n", employees[i].empname);
        printf("Address: %s\n", employees[i].address);
        printf("Age: %d\n", employees[i].age);
        printf("\n");
    }
    
    return 0;
}
