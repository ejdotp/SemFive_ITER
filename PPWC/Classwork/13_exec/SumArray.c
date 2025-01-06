#include <stdio.h>

int main(){
	int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int sum = 0;

	printf("Array: ");
	for(int i=0; i<10; i++){
		printf("%d, ", a[i]);
		sum += a[i];
	}
	
	printf("\nSum of the array = %d\n", sum);
	
	return 0;
}
