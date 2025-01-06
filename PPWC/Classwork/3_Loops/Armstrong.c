//armstrong number
#include <stdio.h>
#include <math.h>
void main()
{
	int num, count, a, temp=0, sum = 0;
	printf("Enter a number: ");
	scanf("%d", &num);
	a = num;
	while(a > 0)
	{
		temp = a % 10;
		count++;
		a = a/10;
	}
	a = num;
	while(a > 0)
	{
		temp = a % 10;
		sum += (pow(temp, count));
		a = a/10;
	}
	printf("Number of digits = %d\nArmstrong Sum = %d\n", count, sum);
	if(sum == num)	
		printf("Bro's Arm is strong\n");
	else
		printf("Womp Womp\n");
}
