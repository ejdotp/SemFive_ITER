#include <stdio.h>

// Define the structure
struct MyStruct {
    int a; // member a
    int b; // member b
    int c; // member c
};

int main() {
    // Declare and initialize a variable of type MyStruct
    struct MyStruct data = {12, 25, 18}; // Initialize a, b, c

    // Declare a pointer variable and point it to the structure variable
    struct MyStruct *ptr = &data;

    // Increment the values of a, b, and c by 10 through the pointer
    ptr->a += 10; // Increment a
    ptr->b += 10; // Increment b
    ptr->c += 10; // Increment c

    // Display the updated values of a, b, and c
    printf("Updated value of a: %d\n", ptr->a);
    printf("Updated value of b: %d\n", ptr->b);
    printf("Updated value of c: %d\n", ptr->c);

    return 0;
}