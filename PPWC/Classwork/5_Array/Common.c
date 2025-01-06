//common between two sets or arrays
#include <stdio.h> 
 
int main()  
{  
    int n;  
    printf("Enter the number of elements in each array: ");  
    scanf("%d", &n);  
	int a[n];
	int b[n];
	
	printf("Enter the elements for a[]: ");
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	
	printf("Enter the elements for b[]: ");
	for(int i = 0; i < n; i++){
		scanf("%d", &b[i]);
	}
		
	printf("Common elements : ");
	for(int i = 0; i < n; i++){
		int unique = 0;
		for(int j = 0; j < n; j++){
			if(a[i] == b[j]){
				unique = 1;
			}
		}
		if(unique){
			printf("%d ", a[i]);
		}
	}
	printf("\n");
	return 0;
}  
