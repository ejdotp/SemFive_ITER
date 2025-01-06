//max and min element of array using pointer to array:
#include <stdio.h>

int main() {
    int n;

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    int *ptr = arr;

    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", ptr + i);
    }

    int min = *ptr; 
    int max = *ptr; 

    for (int i = 1; i < n; i++) {
        if (*(ptr + i) < min)
            min = *(ptr + i);        
        if (*(ptr + i) > max)
            max = *(ptr + i);   
    }

    printf("Min: %d\n", min);
    printf("Max: %d\n", max);

    return 0;
}

