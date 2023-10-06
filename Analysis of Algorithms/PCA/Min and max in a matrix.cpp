#include <stdio.h>

int main() {
    int rows, cols;
    
    // Input the dimensions of the matrix
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    
    int matrix[rows][cols];
    
    // Input the matrix elements
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // Initialize min and max with the first element of the matrix
    int min = matrix[0][0];
    int max = matrix[0][0];
    
    // Find the minimum and maximum elements in the matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] < min) {
                min = matrix[i][j];
            }
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }
    }
    
    // Print the minimum and maximum values
    printf("Minimum value in the matrix: %d\n", min);
    printf("Maximum value in the matrix: %d\n", max);
    
    // Print the matrix itself
    printf("Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
