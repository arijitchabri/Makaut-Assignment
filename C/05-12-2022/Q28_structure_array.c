// C program to declare a struct array of 10 employees

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

    struct Employee employeeData[10];

    int i;

    for (i = 0; i < 10; i++)
    {
        printf("For employee - %d\n", (i + 1));
        printf("Enter employee ID: ");
        scanf("%d", &employeeData[i].employeeId);

        printf("Enter employee name: ");
        scanf("%s", &employeeData[i].employeeName);

        printf("Enter employee salary: ");
        scanf("%f", &employeeData[i].employeeSalary);
    }

    printf("\n----- EMPLOYEEE DETAILS -----\n");

    for (i = 0; i < 10; i++)
    {
        printf("Employee - %d\n", (i + 1));
        printf("Employee ID: %d\n", employeeData[i].employeeId);
        printf("Employee name: %s\n", employeeData[i].employeeName);
        printf("Employee salary: $%f", employeeData[i].employeeSalary);
    }
}