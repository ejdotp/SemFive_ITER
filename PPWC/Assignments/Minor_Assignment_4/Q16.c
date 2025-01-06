#include <stdio.h>

int main() {
    // Declare the arrays
    int a[4], b[4], c[4], d[4];
    int *arr[4]; // Array of pointers to store addresses of a, b, c, and d
    int sumarray[4]; // Array to store the sum of elements

    // Initialize the pointers to point to the arrays
    arr[0] = a;
    arr[1] = b;
    arr[2] = c;
    arr[3] = d;

    // Read values into the arrays using pointers
    printf("Enter 4 elements for array a: ");
    for (int i = 0; i < 4; i++) {
        scanf("%d", &arr[0][i]);
    }

    printf("Enter 4 elements for array b: ");
    for (int i = 0; i < 4; i++) {
        scanf("%d", &arr[1][i]);
    }

    printf("Enter 4 elements for array c: ");
    for (int i = 0; i < 4; i++) {
        scanf("%d", &arr[2][i]);
    }

    printf("Enter 4 elements for array d: ");
    for (int i = 0; i < 4; i++) {
        scanf("%d", &arr[3][i]);
    }

    // Calculate the element-wise sum of the arrays
    for (int i = 0; i < 4; i++) {
        sumarray[i] = arr[0][i] + arr[1][i] + arr[2][i] + arr[3][i];
    }

    // Display the sumarray
    printf("Element-wise sum of arrays a, b, c, and d:\n");
    for (int i = 0; i < 4; i++) {
        printf("sumarray[%d] = %d\n", i, sumarray[i]);
    }

    return 0; // Return success
}