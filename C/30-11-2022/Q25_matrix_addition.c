// C program to calculate the sum of two matrix
#include <stdio.h>
#include <stdlib.h>

void main()
{
    int row, column, i, j;
    printf("Enter the order of matrix: ");
    scanf("%d%d", &row, &column);

    int arr1[row][column], arr2[row][column], sum[row][column];

    printf("Enter the values of first matrix:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
            scanf("%d", &arr1[i][j]);
    }

    printf("Enter the values of second matrix:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
            scanf("%d", &arr2[i][j]);
    }

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
            sum[i][j] = arr1[i][j] + arr2[i][j];
    }

    printf("Sum of two matrix:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }
}