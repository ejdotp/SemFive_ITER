//two methods of declaring constant vars:

#include <stdio.h>
#define m 5+5 //macro defination
const int n = 5+5; //const integer initialization
void main()
{
	int a=0, b=0;
	a = m*m; // 5 + (5 * 5) + 5 = 35
	b = n*n; // 10 * 10 = 100
	printf("%d %d\n", a, b);
	return 0;	
}
