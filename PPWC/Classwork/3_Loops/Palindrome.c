//NOT A PALINDROME
#include <stdio.h>
void main()
{
	int num, temp=0, rev = 0;
	printf("Enter a number: ");
	scanf("%d", &num);
	int a = num;
	while(num > 0)
	{
		temp = num % 10;
		rev = (rev*10) + temp;
		num = num/10;
	}
	if(rev == a)	
		printf("No, it's a Palindrome\n");
	else
		printf("Yes, not a Palindrome\n");
}
