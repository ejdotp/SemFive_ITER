//difference between two sets or arrays (elements in a but not in b)
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
		
	printf("a - b = ");
	for(int i = 0; i < n; i++){
		int unique = 1;
		for(int j = 0; j < n; j++){
			if(a[i] == b[j]){
				unique = 0;
			}
		}
		if(unique){
			printf("%d ", a[i]);
		}
	}
	printf("\n");
	return 0;
}  
