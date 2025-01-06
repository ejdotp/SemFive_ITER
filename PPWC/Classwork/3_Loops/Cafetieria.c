//menu driven program for ordering at cafe allowing multiple orders with multiple quantity. display what ordered and total price.
#include <stdio.h>
void main()
{
	int choice, qt, greatflag = 1, b = 0, p = 0, c = 0, bp = 50, pp = 100, cp = 30, tots = 0;
	printf("Menu:\n1. Burger : Rs. 50.00/-\n2. Pizza  : Rs. 100.00/-\n3. Coffee : Rs. 30.00/-\n4. Exit Menu & Get Bill.\n-----------------------------------\n-----------------------------------\n");
	do{
		printf("Enter choice: ");
		scanf("%d", &choice);
		switch(choice){
			case 1: printf("Enter quantity: ");
				    scanf("%d", &qt);
					b += qt;
					tots += (bp*qt);
					printf("%d Burger(s) added.\n-----------------------------------\n", qt);
				    break;
			case 2: printf("Enter quantity: ");
				    scanf("%d", &qt);
					p += qt;
					tots += (pp*qt);
					printf("%d Pizza(s) added.\n-----------------------------------\n", qt);
				    break;
			case 3: printf("Enter quantity: ");
				    scanf("%d", &qt);
					c += qt;
					tots += (cp*qt);
					printf("%d Coffee(s) added.\n-----------------------------------\n", qt);
				    break;
			case 4: greatflag = 0;
					break;
			default: printf("invalid input!\n-----------------------------------\n");
					 break;
		}
	}while(greatflag);   
	printf("\nOrdered: \n");
	if(b > 0)
		printf("%d Burger(s)\n", b);	
	if(p > 0)
		printf("%d Pizza(s)\n", p);
	if(c > 0)
		printf("%d Coffee(s)\n", c);
	printf("\nTotal Bll = Rs. %d.00/-\n", tots);
}
