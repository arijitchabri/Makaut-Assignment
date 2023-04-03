// C program to find maximum between two numbers
#include <stdio.h>
#include <conio.h>

void main()
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);

    if (num1 > num2)
        printf("%d is greater than %d", num1, num2);
    else if (num1 < num2)
        printf("%d is greater than %d", num2, num1);
    else
        printf("Both numbers are equal!");
}