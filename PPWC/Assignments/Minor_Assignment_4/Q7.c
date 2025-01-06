#include <stdio.h>

int main() {
    // Declare and initialize the variables
    int a = 52; // Initialize a
    int b = 18; // Initialize b

    // Declare pointer variables and point them to the respective variables
    int *ptr1 = &a; // Pointer to a
    int *ptr2 = &b; // Pointer to b

    // Find the greater value using pointer manipulation
    int greater;
    if (*ptr1 > *ptr2) {
        greater = *ptr1; // a is greater
    } else {
        greater = *ptr2; // b is greater
    }

    // Print the greater value
    printf("The greater value between a and b is: %d\n", greater);

    return 0;
}