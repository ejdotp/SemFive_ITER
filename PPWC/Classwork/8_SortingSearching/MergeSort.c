//Merge Sort:

#include <stdio.h>
void Merge(int A[ ], int p, int q, int r);
void Merge_Sort(int A[], int p, int r);
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
	Merge_Sort(A, 0, n-1);
	printf("Sorted Array: ");
	print(A, n);
	return 0;
}

void Merge(int A[ ], int p, int q, int r)
{ 
	int n1 = q - p + 1;
	int n2 = r - q; 
	int Left[n1], Right[n2];
	for (int i = 0; i < n1; i++)
		Left[i] = A[p + i];
	for (int j = 0; j < n2; j++)
		Right[j] = A[q + 1 + j];
	int i = 0, j = 0, k = p;
	while (i < n1 && j < n2) {
		if (Left[i] <= Right[j]) {
			A[k] = Left[i];
			i++;
		} else {
			A[k] = Right[j];
			j++;
		}
		k++;
	}
	while (i < n1) {
		A[k] = Left[i];
		i++;
		k++;
	}
	while (j < n2) {
		A[k] = Right[j];
		j++;
		k++;
	}
}

void Merge_Sort(int A[], int p, int r)
{
	if(p < r){
		int q = (p + r) / 2;
		Merge_Sort(A, p, q);
		Merge_Sort(A, q + 1, r);
		Merge(A, p, q, r);
	}
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

