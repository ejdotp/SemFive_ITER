//Matrix Multiplication and check them for sparse 
#include <stdio.h> 
 
int main()  
{  
    int r1, c1, r2, c2, zero = 0;  
    printf("Enter r1, c1 for A[r1][c1]: ");  
    scanf("%d %d", &r1, &c1);  
	int a[r1][c1];

	printf("Enter r2, c2 for B[r2][c2]: ");  
    scanf("%d %d", &r2, &c2);  
	int b[r2][c2];
	
	if(c1 == r2){
		printf("Enter the elements for Matrix A:\n");
		for(int i = 0; i < r1; i++){
			for(int j = 0; j < c1; j++){
				scanf("%d", &a[i][j]);
				if(a[i][j] == 0)
					zero++;
			}
		}
		if(zero > ((r1*c1)/2))
			printf("Matrix A is a Sparse matrix.\nS");
		else
			printf("Matrix A is a Dense matrix.\n");
		
		zero = 0;	
		printf("Enter the elements for Matrix B:\n");
		for(int i = 0; i < r2; i++){
			for(int j = 0; j < c2; j++){
				scanf("%d", &b[i][j]);
				if(a[i][j] == 0)
					zero++;
			}
		}
		if(zero > ((r2*c2)/2))
			printf("Matrix B is a Sparse matrix.\n");
		else
			printf("Matrix B is a Dense matrix.\n");
			
		printf("Resultant Matrix:\n");
		int res[r1][c2];
		for(int i = 0; i < r1; i++){
			for(int j = 0; j < c2; j++){
				res[i][j] = 0;
				for(int k = 0; k < r2; k++){
					res[i][j] += a[i][k]*b[k][j];
				}
				printf("%d\t", res[i][j]);
			}
			printf("\n");
		}
	}
	else{ printf("Matrix multiplication not possible\n"); }
	
	return 0;
}  
