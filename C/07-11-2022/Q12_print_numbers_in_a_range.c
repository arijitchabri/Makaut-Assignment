// C program to print all the odd numbers in a given range
#include <stdio.h>
#include <conio.h>

void main()
{
    int lowerLimit, upperLimit;

    printf("Enter a range: ");
    scanf("%d%d", &lowerLimit, &upperLimit);

    while (lowerLimit <= upperLimit)
    {
        if (lowerLimit % 2 != 0)
            printf("%d, ", lowerLimit);
        lowerLimit++;
    }
}