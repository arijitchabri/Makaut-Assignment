// C program to check a number is prime or not
#include <stdio.h>
#include <conio.h>

void main()
{
    int num, i;
    printf("Enter the number: ");
    scanf("%d", &num);

    for (i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            printf("%d is not prime", num);
            return;
        }
    }
    printf("%d is prime", num);
}