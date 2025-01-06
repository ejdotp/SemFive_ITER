#include <stdio.h>

int main() {
    // Declare and initialize the first array (integer array)
    int firstArray[] = {10, 13, 20, 33, 44};
    
    // Declare and initialize the second array (float array)
    float secondArray[] = {10.2, 13.3, 20.0, 33.3, 45.3, 89.9};

    // Print values and addresses of the first array
    printf("First Array (Integers):\n");
    for (int i = 0; i < 5; i++) {
        printf("Value: %d, Address: %p\n", *(firstArray + i), (void*)&firstArray[i]);
    }

    // Print values and addresses of the second array
    printf("\nSecond Array (Floats):\n");
    for (int i = 0; i < 6; i++) {
        printf("Value: %.1f, Address: %p\n", *(secondArray + i), (void*)&secondArray[i]);
    }

    return 0;
}