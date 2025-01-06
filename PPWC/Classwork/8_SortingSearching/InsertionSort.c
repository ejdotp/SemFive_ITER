//Insertion Sort:

#include <stdio.h>
int InSort(int a[], int n);
void print(int a[], int n);

int main()
{
	int n;
	printf("Array Size: ");
	scanf("%d", &n);
	int A[n];
	printf("Enter Elements: ");
	for(int i=0; i < n; i++)
		scanf("%d, ", &A[i]);
	int passes = InSort(A, n);
	printf("Sorted Array: ");
	print(A, n);
	printf("< %d passes performed >\n", passes);
	return 0;
}

int InSort(int a[], int n)
{
	int pass = 0;
	for(int i = 1; i < n; i++){ 
		int key = a[i];
		int j = i - 1;
		while(j >= 0 && a[j] > key){
			pass++;
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = key;
	}
	return pass;
}

void print(int A[ ], int n)
{
	printf("{ ");
	for(int i = 0; i < n-1; i++){
		printf("%d, ", A[i]);
	}
	printf("%d }", A[n-1]);
	printf("\n");
}

