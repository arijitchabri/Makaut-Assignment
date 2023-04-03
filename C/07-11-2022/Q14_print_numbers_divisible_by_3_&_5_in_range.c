// C program to print all numbers divisible by 3 or 5 in a given range
#include <stdio.h>
#include <conio.h>

void main()
{
    int lowerLimit, upperLimit;

    printf("Enter a range: ");
    scanf("%d%d", &lowerLimit, &upperLimit);

    while (lowerLimit <= upperLimit)
    {
        if (lowerLimit % 3 == 0 || lowerLimit % 5 == 0)
            printf("%d, ", lowerLimit);
        lowerLimit++;
    }
}