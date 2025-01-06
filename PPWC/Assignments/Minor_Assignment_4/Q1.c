#include <stdio.h>

// Define the structure
struct MyStruct {
    int Ia;      // member Ia of type int
    float Fb;    // member Fb of type float
    char Chvar;  // member Chvar of type char
};

int main() {
    // Declare a variable of type MyStruct
    struct MyStruct var;

    // Assign values to the structure members
    var.Ia = 345;     // Assigning value to Ia
    var.Fb = 45.0;    // Assigning value to Fb
    var.Chvar = 'Z';   // Assigning value to Chvar

    // Print the values and addresses of the structure members
    printf("Value of Ia: %d, Address of Ia: %p\n", var.Ia, (void*)&var.Ia);
    printf("Value of Fb: %.2f, Address of Fb: %p\n", var.Fb, (void*)&var.Fb);
    printf("Value of Chvar: %c, Address of Chvar: %p\n", var.Chvar, (void*)&var.Chvar);

    return 0;
}