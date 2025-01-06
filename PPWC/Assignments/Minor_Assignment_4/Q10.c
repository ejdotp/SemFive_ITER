#include <stdio.h>

int main() {
    // Declare and initialize the integer array
    int a[] = {120, 502, 118, 188, 106, 447};
    
    // Declare pointer variables and initialize them to point to the elements of the array
    int *ptr1 = &a[0];
    int *ptr2 = &a[1];
    int *ptr3 = &a[2];
    int *ptr4 = &a[3];
    int *ptr5 = &a[4];
    int *ptr6 = &a[5];

    // Display the contents of the array using pointers
    printf("Array contents using pointers:\n");
    printf("Index\tValue\tAddress\n");
    printf("------------------------------\n");
    printf("0\t%d\t%p\n", *ptr1, (void*)ptr1);
    printf("1\t%d\t%p\n", *ptr2, (void*)ptr2);
    printf("2\t%d\t%p\n", *ptr3, (void*)ptr3);
    printf("3\t%d\t%p\n", *ptr4, (void*)ptr4);
    printf("4\t%d\t%p\n", *ptr5, (void*)ptr5);
    printf("5\t%d\t%p\n", *ptr6, (void*)ptr6);

    return 0;
}