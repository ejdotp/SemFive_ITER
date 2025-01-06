#include <stdio.h>

// Define the structure
struct MyStruct {
    int a; // member a
    int b; // member b
    int c; // member c
};

int main() {
    // Declare and initialize a variable of type MyStruct
    struct MyStruct data = {12, 52, 8}; // Initialize a, b, c

    // Declare pointer variables and point them to the respective members
    int *ptr1 = &data.a; // Pointer to a
    int *ptr2 = &data.b; // Pointer to b
    int *ptr3 = &data.c; // Pointer to c

    // Increment the values of a, b, and c by 10 through their respective pointers
    *ptr1 += 10; // Increment a
    *ptr2 += 10; // Increment b
    *ptr3 += 10; // Increment c

    // Display the updated values of a, b, and c
    printf("Updated value of a: %d\n", data.a);
    printf("Updated value of b: %d\n", data.b);
    printf("Updated value of c: %d\n", data.c);

    return 0;
}