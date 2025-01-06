//CAR RENTAL
#include <stdio.h>
int main()
{
	int i, j;
	float price, disc, total;
	
	printf("Which Car?:\n1: Economy\n2: Standard\n3: Luxury\n");
	scanf("%d", &i);
	switch(i){
		case 1: price = 50;
				break;
		case 2: price = 75;
				break;
		case 3: price = 100;
				break;
		default: printf("Invalid Input\n");
				 break;
	}
	
	printf("How many days: ");
	scanf("%d", &j);
	if(j < 8)
		disc = 0;
	else
		disc = 0.1;
		
	total = (price*j) - (disc*(price*j));
	printf("Total price is: %.3f\n", total);
	return 0;
}
