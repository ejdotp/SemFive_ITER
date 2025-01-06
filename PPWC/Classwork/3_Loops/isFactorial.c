//Reverse Factorial(enter a number and find out whose factorial it is)
#include <stdio.h>
void main()
{
	int num, i=1, fact=1;
	printf("Enter a number: ");
	scanf("%d", &num);

	if(num == 1){
		printf("1 is the factorial of 0.\n");
	}else{
		while(fact < num)
		{
			i++;
			fact *= i;
		}
		if(num == fact){
			printf("%d is the factorial of %d.\n", num, i);
		}else{
			printf("Not factorial of any number.\n");
		}
	}
}
