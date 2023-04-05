// C program to add 2 numbers entered by the user and display the result

#include <stdio.h>
#include <conio.h>

void main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);
    printf("Sum of two numbers entered is %d", (num1 + num2));
}