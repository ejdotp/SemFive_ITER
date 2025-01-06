//Bubble Sort:

#include <stdio.h>
void Bubbly(int a[], int n);
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
	Bubbly(A, n);
	printf("Sorted Array: ");
	print(A, n);
	return 0;
}

void Bubbly(int a[], int n)
{
    for(int i = 0; i<n; i++)
    {
    	printf("Pass %d:\n", (i+1));
    	for(int j = 0; j<n-i-1; j++)
    	{
    		if(a[j] > a[j+1])
    		{
    			printf("\t-> Swap %d & %d\n", a[j], a[j+1]);
    			int temp = a[j];
    			a[j] = a[j+1];
    			a[j+1] = temp;
    		}
    	}
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

