// C program to display n natural numbers
#include <stdio.h>
#include <conio.h>

void main()
{
    int num, i = 1;
    printf("Enter total numbers to be printed: ");
    scanf("%d", &num);
    while (i <= num)
    {
        printf("%d\n", i);
        i++;
    }
}