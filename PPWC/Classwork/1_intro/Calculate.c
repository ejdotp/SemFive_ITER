#include <stdio.h>
int main()
{
	float  a, b, div;
	int sum, prod;
	
	printf("Enter first number: ");
	scanf("%f", &a);
	printf("Enter second number: ");
	scanf("%f", &b);
	
	sum = (int)(a + b);
	prod = (int)(a * b);
	div = a / b;
	
	printf("Sum: %d\n", sum);
	printf("Product: %d\n", prod);
	printf("Quotient: %f\n", div);
}
	
