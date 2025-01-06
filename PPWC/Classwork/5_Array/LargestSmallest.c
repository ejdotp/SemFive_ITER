//largest and smallest in array
#include <stdio.h> 
 
void main()  
{  
    int n;  
    printf("Enter the number of elements: ");  
    scanf("%d", &n);  
	int arr[n];
	printf("Enter the elements: ");
	for(int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	int L = arr[0], S = arr[0];
	for(int i = 1; i < n; i++){
		if(L < arr[i])
			L = arr[i];
		if(S > arr[i])
			S = arr[i];
	}
	printf("Largest = %d\nSmallest = %d\n", L, S);
}  
