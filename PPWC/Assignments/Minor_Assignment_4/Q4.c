#include <stdio.h>

// Define the structure
struct MyStruct {
    int x; // member x
};

int main() {
    // Declare and initialize a variable of type MyStruct
    struct MyStruct data = {89}; // Initialize x to 89

    // Declare pointer variables and point them to the structure variable
    struct MyStruct *p1 = &data;
    struct MyStruct *p2 = &data;
    struct MyStruct *p3 = &data;

    // Display the value of x from p1
    printf("Value of x from p1: %d\n", p1->x);

    // Update the value of x to 100 using pointer p3
    p3->x = 100;

    // Display the updated value of x from p1
    printf("Updated value of x from p1: %d\n", p1->x);

    return 0;
}