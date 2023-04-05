// C program to take a variable int and input the value from the user and display it

#include <stdio.h>
#include <conio.h>

void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Number entered is %d", num);
}