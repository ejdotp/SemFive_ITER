#include <stdio.h>
int main()
{
	int i, j;
	printf("Enter i: ");
	scanf("%d", &i);
	switch(i){
		case 2: i = i*i;
		case 4: i = i*i;
		default: i = i*i;
				 break;
		case 16: i = i*i;
	}
	j = i;
	printf("J = %d", j);
	return 0;
		
}
