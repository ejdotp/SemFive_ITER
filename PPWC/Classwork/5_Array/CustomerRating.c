//rating count, avg rating, most frequent rating
#include <stdio.h>
 
int main()  
{  
	int temp, maxindex=1; float avg, sum, n;
	printf("Enter No. of Customers: ");
	scanf("%f", &n);
	int arr[6];
	printf("Enter customer ratings (1-5): ");
	for(int i = 0; i < n; i++){
		scanf("%d", &temp);
		sum += temp;
		arr[temp]++;
	}
	avg = sum/n;
	for(int i = 2; i < 6; i++)
		if(arr[i+1] >= arr[i])
			maxindex = i;
			
	printf("1: %d customers\n2: %d customers\n3: %d customers\n4: %d customers\n5: %d customers\nAverage rating: %f\nMost frequent rating (mode): %d\n", arr[1], arr[2], arr[3], arr[4], arr[5], avg, maxindex);

	return 0;
}  
