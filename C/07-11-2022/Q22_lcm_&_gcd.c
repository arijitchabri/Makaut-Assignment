// C program to find LCM and GCD of two numbers
#include <stdio.h>
#include <conio.h>

void main()
{
    int num1, num2, gcd, lcm, remainder, numerator, denominator;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    numerator = (num1 > num2) ? num1 : num2;
    denominator = (num1 < num2) ? num1 : num2;
    remainder = numerator % denominator;

    while (remainder != 0)
    {
        numerator = denominator;
        denominator = remainder;
        remainder = numerator % denominator;
    }
    gcd = denominator;
    lcm = num1 * num2 / gcd;
    printf("GCD of %d and %d = %d\n", num1, num2, gcd);
    printf("LCM of %d and %d = %d\n", num1, num2, lcm);
}