//Print digits from right and check divisible by 9(sum of digits divisible by 9 makes number divisible by 9)
#include <stdio.h>
void main()
{
	int num, temp=0, sum = 0;
	printf("Enter a number: ");
	scanf("%d", &num);
	while(num > 0)
	{
		temp = num % 10;
		printf("%d", temp);
		sum = sum + temp;
		num = num/10;
	}
	if(sum%9 == 0)
		printf("\nYes\n");
	else
		printf("\nNo\n");
}
