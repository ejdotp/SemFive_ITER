//MENU DRIVEN C PROGRAM FOR CALCULATING AREA OF DIFF SHAPES: CIRCLE, SQAURE, RECT
#include <stdio.h>
#define PI 3.14
int main()
{
	int i;
	float a, b, area;
	printf("Menu:\n1: Circle\n2: Square\n3: Rectangle\n");
	scanf("%d", &i);
	switch(i){
		case 1: printf("Length of the radius: ");
				scanf("%f", &a);
				area = PI*a*a;
				printf("Area of the Circle is: %.3f\n", area);
				break;
		case 2: printf("Length of each side: ");
				scanf("%f", &a);
				area = a*a;
				printf("Area of the Square is: %.3f\n", area);
				break;
		case 3: printf("Length: ");
				scanf("%f", &a);
				printf("Breadth: ");
				scanf("%f", &b);
				area = a*b;
				printf("Area of the Rectangle is: %.3f\n", area);
				break;
		default: printf("Invalid Input\n");
				 break;
	}
	return 0;
}
