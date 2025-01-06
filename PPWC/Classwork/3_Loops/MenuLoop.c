//menu driven program for: 1)factorial 2)isprime 3)oddeven 4)exit
#include <stdio.h>
void main()
{
	int num, choice, greatflag = 1;
	do{
		printf("Enter choice: ");
		scanf("%d", &choice);
		switch(choice){
			case 1: printf("Enter number: ");
				    scanf("%d", &num);
				    int fact = 1, temp = 1;
				    while(temp <= num){
				    	fact *= temp++;
				    }
				    printf("Factorial = %d\n", fact);
				    break;
			case 2: printf("Enter number: ");
				    scanf("%d", &num);
				    int flag = 1;
				    for(int i=2; i<=num/2; i++){
				    	if(num%i == 0){
				    		flag = 0;
				    	}
				    }
				    if(flag)
				    	printf("Is Prime\n");
				    else
				    	printf("Not Prime :(\n");
				    break;
			case 3: printf("Enter number: ");
				    scanf("%d", &num);
				    if(num%2 == 0)
				    	printf("Even\n");
				    else
				    	printf("Odd\n");
				    break;
			case 4: greatflag = 0;
					break;
			default: printf("invalid input\n");
					 break;
		}
	}while(greatflag);   	
}
