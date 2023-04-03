// C program to compare te size of Union and Structure

#include <stdlib.h>
#include <stdio.h>

struct StructureEmployee
{
    int employeeId;
    char employeeName[10];
    float employeeSalary;
} structEmployee;

union UnionEmployee {
    int employeeId;
    char employeeName[10];
    float employeeSalary;
} unionEmployee;

void main()
{
    printf("Size of struct Employee: %d\n", sizeof(structEmployee));
    printf("Size of union Employee: %d", sizeof(unionEmployee));
}