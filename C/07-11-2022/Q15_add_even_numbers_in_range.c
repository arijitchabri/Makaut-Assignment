// C program to add all even numbers in a range
#include <stdio.h>
#include <conio.h>

void main()
{
    int lowerLimit, upperLimit, sum = 0;

    printf("Enter a range: ");
    scanf("%d%d", &lowerLimit, &upperLimit);

    while (lowerLimit <= upperLimit)
    {
        if (lowerLimit % 2 == 0)
            sum += lowerLimit;
        lowerLimit++;
    }
    printf("Sum: %d", sum);
}