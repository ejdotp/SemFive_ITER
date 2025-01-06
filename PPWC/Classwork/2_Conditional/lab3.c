#include <stdio.h>
#include <stdbool.h>
int main()
{
	int mph;
	printf("Enter Wind Speed: ");
	scanf("%d", &mph);
	if(mph < 25){
		printf("Not a strong wind\n");
	}else if(25<=mph && mph<=38){
		printf("Strong Wind\n");
	}else if(39<=mph && mph<=54){
		printf("Gale\n");
	}else if(55<=mph && mph<=72){
		printf("Whole Gale\n");
	}else{
		printf("Hurricane\n");
	}
	return 0;
		
	/*int a;
	printf("What year? ");
	scanf("%d", &a);
	if((a%400==0) || (a%100!=0 && a%4==0))
		printf("Leap Year\n");
	else
		printf("Non Leap Year\n");
	return 0;*/
}
