// C program to print Fibonacci series in a range

#include <stdio.h>
#include <conio.h>
void main()

{

    int f1 = 0, f2 = 1, f3 = 0, r1, r2;
    printf("Enter the range: ");
    scanf("%d %d", &r1, &r2);
    if (r1 == 0)
        printf("%d, ", f1);

    for (int i = 0; i <= r2; i++)
    {
        f1 = f2;
        f2 = f3;
        f3 = f1 + f2;
        if (f3 >= r1 && f3 <= r2)
            printf("%d, ", f3);
    }
}