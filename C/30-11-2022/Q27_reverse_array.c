// C program to reverse an array
#include <stdio.h>
#include <stdlib.h>

void main()
{
    int num, i;

    printf("Enter the size of the array: ");
    scanf("%d", &num);

    int arr[num];
    printf("Enter the elements: ");

    for (i = 0; i < num; i++)
        scanf("%d", &arr[i]);

    int x = 0, y = num - 1;

    while (x < y)
    {
        arr[x] = arr[x] + arr[y];
        arr[y] = arr[x] - arr[y];
        arr[x] = arr[x] - arr[y];
        x++;
        y--;
    }

    printf("Array after reversing: ");
    for (i = 0; i < num; i++)
        printf("%d, ", arr[i]);
}