#include <stdio.h>

int main() {
  int arr[] = {10, 5, 8, 20, 15};
  int n = sizeof(arr) / sizeof(arr[0]); // Size of the array

  // Initialize a pointer to the first element
  int *ptr = arr;
  int largest = *ptr;

  // Iterate through the array using pointers
  for (int i = 1; i < n; i++) {
    ptr++; // Move the pointer to the next element
    if (*ptr > largest) {
      largest = *ptr;
    }
  }

  printf("The largest element in the array is: %d\n", largest);

  return 0;
}