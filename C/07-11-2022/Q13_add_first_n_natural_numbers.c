// C program to add first n numbers using while loop
#include <stdio.h>
#include <conio.h>

void main()
{
    int num, sum = 0, i = 1;

    printf("Enter total numbers to be added: ");
    scanf("%d", &num);

    while (i <= num)
    {
        sum += i;
        i++;
    }
    printf("Sum: %d", sum);
}