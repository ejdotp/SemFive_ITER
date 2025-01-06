#include <stdio.h>

int main() {
    // Declare two integer variables
    int a = 10; // Assign value to a
    int b = 20; // Assign value to b

    // Print initial values and addresses
    printf("Before Swap:\n");
    printf("Value of a: %d, Address of a: %p\n", a, (void*)&a);
    printf("Value of b: %d, Address of b: %p\n", b, (void*)&b);

    // Swap the contents of the variables
    int temp = a; // Store the value of a in temp
    a = b;        // Assign the value of b to a
    b = temp;     // Assign the value of temp (original a) to b

    // Print values and addresses after swap
    printf("\nAfter Swap:\n");
    printf("Value of a: %d, Address of a: %p\n", a, (void*)&a);
    printf("Value of b: %d, Address of b: %p\n", b, (void*)&b);

    // Check if addresses are equal
    if (&a == &b) {
        printf("\nAddresses of a and b are equal.\n");
    } else {
        printf("\nAddresses of a and b are not equal.\n");
    }

    return 0;
}