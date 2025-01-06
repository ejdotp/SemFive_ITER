#include <stdio.h>

void arrange(int *a, int *b) {
  if (*a > *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
  }
}

int main() {
  int n1, n2, n3, n4, n5, n6;

  printf("Enter SIX numbers separated by blanks> ");
  scanf("%d %d %d %d %d %d", &n1, &n2, &n3, &n4, &n5, &n6);

  // Call arrange() function 15 times to sort the numbers
  arrange(&n1, &n2);
  arrange(&n1, &n3);
  arrange(&n1, &n4);
  arrange(&n1, &n5);
  arrange(&n1, &n6);
  arrange(&n2, &n3);
  arrange(&n2, &n4);
  arrange(&n2, &n5);
  arrange(&n2, &n6);
  arrange(&n3, &n4);
  arrange(&n3, &n5);
  arrange(&n3, &n6);
  arrange(&n4, &n5);
  arrange(&n4, &n6);
  arrange(&n5, &n6);

  // Print the sorted numbers
  printf("The numbers in ascending order are: %d %d %d %d %d %d\n", n1, n2, n3, n4, n5, n6);

  return 0;
}