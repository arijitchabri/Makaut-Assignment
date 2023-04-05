// C program to multiply two matrices
#include <stdio.h>
#include <stdlib.h>

void main()
{
    int row1, column1, row2, column2;

    printf("Enter the order of first matrix: ");
    scanf("%d%d", &row1, &column1);

    printf("Enter the order of second matrix: ");
    scanf("%d%d", &row2, &column2);

    if (column1 == row2)
    {
        int arr1[row1][column1], arr2[row2][column2], product[row2][column1], i, j, k;

        printf("Enter the elements of first matrix: ");
        for (i = 0; i < row1; i++)
            for (j = 0; j < column1; j++)
            {
                scanf("%d", &arr1[i][j]);
            }

        printf("Enter the elements of second matrix: ");
        for (i = 0; i < row2; i++)
            for (j = 0; j < column2; j++)
            {
                scanf("%d", &arr2[i][j]);
            }

        for (i = 0; i < row2; i++)
            for (j = 0; j < column1; j++)
            {
                product[i][j] = 0;
                for (k = 0; k < column1; k++)
                    product[i][j] += arr1[i][k] * arr2[k][j];
            }

        printf("Resultant matrix:\n");
        for (i = 0; i < row2; i++)
        {
            for (j = 0; j < column1; j++)
                printf("%d ", product[i][j]);
            printf("\n");
        }
    }
}