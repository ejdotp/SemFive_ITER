//EXTRACT LAST DIGIT AND ADD TO SUM
#include <stdio.h>
void main()
{
	int num, temp=0, sum = 0;
	printf("Enter a number: ");
	scanf("%d", &num);
	while(num > 0)
	{
		temp = num % 10;
		sum = sum + temp;
		num = num/10;
	}
	printf("Sum = %d\n", sum);
}
