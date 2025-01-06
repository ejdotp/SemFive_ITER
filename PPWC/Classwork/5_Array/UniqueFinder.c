//unique no. in array:
#include <stdio.h> 
 
int main()  
{  
    int n;  
    printf("Enter the number of elements: ");  
    scanf("%d", &n);  
	int arr[n];
	
	printf("Enter the elements: ");
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
		
	printf("Unique elements are: ");
	for(int k = 0; k < n; k++){
		int unique = 1;
		for(int j = 0; j < n; j++){
			if((k != j) && (arr[k] == arr[j])){
				unique = 0;
			}
		}
		if(unique){
			printf("%d ", arr[k]);
		}
	}
	printf("\n");
	return 0;
}  
