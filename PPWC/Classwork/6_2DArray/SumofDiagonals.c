//Sum of diagonals of sqaure matrix
#include <stdio.h> 
 
int main()  
{  
    int r, sum = 0;
    printf("Enter length of row and column: ");  
    scanf("%d", &r);  
	int a[r][r];

	printf("Enter the elements for the Matrix:\n");
	for(int i = 0; i < r; i++){
		for(int j = 0; j < r; j++){
			scanf("%d", &a[i][j]);
			if(i == j)
				sum+=a[i][i];
		}
	}

	printf("Sum of diagonal elements = %d\n", sum);

	return 0;
}  
