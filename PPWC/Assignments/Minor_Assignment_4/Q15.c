#include <stdio.h>

int main() {
    // Declare the variables
    int a, b, c, d;
    int *arr[4]; // Array of pointers to store addresses of a, b, c, and d
    int maxvar;  // Variable to store the maximum value

    // Initialize the variables
    a = 55;
    b = 105;
    c = 89;
    d = 68;

    // Store the addresses of the variables in the array
    arr[0] = &a;
    arr[1] = &b;
    arr[2] = &c;
    arr[3] = &d;

    // Find the maximum value among a, b, c, and d using pointer manipulation
    maxvar = *arr[0]; // Start with the first value
    for (int i = 1; i < 4; i++) {
        if (*arr[i] > maxvar) {
            maxvar = *arr[i]; // Update maxvar if the current value is greater
        }
    }

    // Display the maximum value
    printf("The maximum value among a, b, c, and d is: %d\n", maxvar);

    return 0; // Return success
}