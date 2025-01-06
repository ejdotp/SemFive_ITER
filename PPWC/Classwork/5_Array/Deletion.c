//DELEtion:
#include <stdio.h>
 
int main()  
{  
	int n, p;
	printf("Enter Array Size: ");
	scanf("%d", &n);
	int arr[n];
	printf("Enter the elements: ");
	for(int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	printf("Enter position for deletion(0 to %d): ", (n-1));
	scanf("%d", &p);
	for(int i = p-1; i < n-1; i++)
		arr[i] = arr[i+1];
	arr[n-1] = 0;
	arr[--n];
	printf("Updated Array: { ");
	for(int i = 0; i < n-1; i++)
		printf("%d, ", arr[i]);
	printf("%d }\n", arr[n-1]);
	return 0;
}  
