// C program to reverse a string

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void main()
{

    char str[100];
    int x = 0, y;

    printf("Enter a string: ");
    scanf("%s", &str);

    y = strlen(str) - 1;

    while (x < y)
    {
        char temp = str[x];
        str[x] = str[y];
        str[y] = temp;
        x++;
        y--;
    }

    printf("Reversed string: %s", str);
}