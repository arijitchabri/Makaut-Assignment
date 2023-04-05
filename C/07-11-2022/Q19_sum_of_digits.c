// C program to add digits of a number
#include <stdio.h>
#include <conio.h>

void main()
{
    int num, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &num);

    while (num > 0)
    {
        sum += num % 10;
        num /= 10;
    }

    printf("Sum of digits: %d", sum);
}