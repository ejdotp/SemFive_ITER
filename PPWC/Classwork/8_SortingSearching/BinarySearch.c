//Binary Search:

#include <stdio.h>
int BSearch(int A[], int n, int item);

int main()
{
	int N;
	printf("Array Size: ");
	scanf("%d", &N);
	int A[N];
	printf("Enter Elements: ");
	for(int i=0; i < N; i++)
		scanf("%d, ", &A[i]);
	int item;
	printf("Searching for?: ");
	scanf("%d", &item);
	int loc = BSearch(A, N, item);
	if(loc != -1){
		printf("Item %d found at index %d.\n", item, loc);
	}else{
		printf("Item %d not found in the array.\n", item);
	}
	return 0;
}

int BSearch(int A[], int N, int item)
{
	int loc = -1;
	int B = 0, E = N - 1;
	while (B <= E) {
		int mid = (B + E) / 2;
		if (A[mid] == item) {
			loc = mid;
			break;
		}
		else if (item > A[mid]) {
			B = mid + 1;
		}
		else {
			E = mid - 1;
		}
	}
	return loc;
}

