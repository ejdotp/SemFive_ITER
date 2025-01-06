//REVERSE NUMBER
#include <stdio.h>
void main()
{
	int num, temp=0, rev = 0;
	printf("Enter a number: ");
	scanf("%d", &num);
	while(num > 0)
	{
		temp = num % 10;
		rev = (rev*10) + temp;
		num = num/10;
	}
	printf("Reverse = %d\n", rev);
}
