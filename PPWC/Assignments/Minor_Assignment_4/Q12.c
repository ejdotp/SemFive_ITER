#include <stdio.h>

int main() {
    // Declare and initialize the integer array
    int a[] = {120, 502, 118, 188, 106, 447};

    // Declare a pointer variable and initialize it to point to the first element of the array
    int *ptr = &a[0]; // Alternatively, you can use ptr = a;

    // Display the contents of the array using the pointer
    printf("Array contents using pointer:\n");
    printf("Index\tValue\tAddress\n");
    printf("------------------------------\n");
    
    // Loop through the array using the pointer
    for (int i = 0; i < 6; i++) {
        printf("%d\t%d\t%p\n", i, *(ptr + i), (void*)(ptr + i));
    }

    return 0;
}