#include <stdio.h>
int main()
{
	float a, b, c, avg;
	
	printf("Enter first number: ");
	scanf("%f", &a);
	printf("Enter second number: ");
	scanf("%f", &b);
	printf("Enter third number: ");
	scanf("%f", &c);
	
	avg = ((a+b+c)/3);
	
	printf("Average is: %f\n", avg);
}
	
