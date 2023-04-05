// C program to enter and display employee details using struct pointers
#include <stdlib.h>
#include <stdio.h>

struct Employee
{
    int employeeId;
    char employeeName[10];
    float employeeSalary;
};

void main()
{
    struct Employee *employeePointer, employeeData;

    employeePointer = &employeeData;

    printf("Enter employee ID: ");
    scanf("%d", &employeePointer->employeeId);

    printf("Enter employee name: ");
    scanf("%s", &employeePointer->employeeName);

    printf("Enter employee salary: ");
    scanf("%f", &employeePointer->employeeSalary);

    printf("\n----- EMPLOYEEE DETAILS -----\n");
    printf("Employee ID: %d\n", employeePointer->employeeId);
    printf("Employee name: %s\n", employeePointer->employeeName);
    printf("Employee salary: $%.2f", employeePointer->employeeSalary);
}