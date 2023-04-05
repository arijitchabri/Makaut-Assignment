// C program to reverse a number
#include <stdio.h>
#include <conio.h>

void main()
{
    int num, temp, reverse = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    temp = num;
    while (temp > 0)
    {
        reverse = (reverse * 10) + (temp % 10);
        temp /= 10;
    }

    printf("Reversed number: %d", reverse);
}