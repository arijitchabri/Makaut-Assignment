// C program to check a number is Armstrong or not

#include <stdio.h>
#include <conio.h>
void main()
{
    int num, rem, sum = 0, temp;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while (num > 0)
    {
        rem = num % 10;
        sum += (rem * rem * rem);
        num = num / 10;
    }
    if (temp == sum)
        printf("%d is a Armstrong number", temp);
    else
        printf("%d is not a Armstrong number", temp);
}