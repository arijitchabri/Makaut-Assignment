// C program to print the reverse triangle
#include <stdio.h>
#include <conio.h>

void main()
{
    int n, i, j, s;

    printf("Enter size of triangle :");
    scanf("%d", &n);
    s = n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i - 1; j++)
            printf(" ");

        for (j = 1; j <= (s * 2) - 1; j++)
            printf("*");

        printf("\n");
        s--;
    }
}
