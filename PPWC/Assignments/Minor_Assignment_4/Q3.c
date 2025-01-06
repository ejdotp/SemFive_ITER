#include <stdio.h>

// Define the structure
struct MyStruct {
    float x; // member x
    float y; // member y
    float z; // member z
};

int main() {
    // Declare and initialize a variable of type MyStruct
    struct MyStruct data = {6.7, 1.2, 2.3};

    // Declare a pointer variable and point it to the structure variable
    struct MyStruct *p = &data;

    // Display the values of x, y, and z using the pointer p
    printf("Value of x: %.2f\n", p->x);
    printf("Value of y: %.2f\n", p->y);
    printf("Value of z: %.2f\n", p->z);

    return 0;
}