#include <stdio.h>

// Function to transpose a matrix
void transposeMatrix(int *matrix, int rows, int cols) {
    int temp;
    for (int i = 0; i < rows; i++) {
        for (int j = i + 1; j < cols; j++) {
            temp = *(matrix + i * cols + j);
            *(matrix + i * cols + j) = *(matrix + j * cols + i);
            *(matrix + j * cols + i) = temp;
        }
    }
}

int main() {
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Allocate memory for the matrix
    int *matrix = (int *)malloc(rows * cols * sizeof(int));

    // Input the elements of the matrix
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", matrix + i * cols + j);
        }
    }

    // Transpose the matrix
    transposeMatrix(matrix, rows, cols);

    // Print the transposed matrix
    printf("\nTransposed matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", *(matrix + i * cols + j));
        }
        printf("\n");
    }

    // Free the allocated memory
    free(matrix);

    return 0;
}