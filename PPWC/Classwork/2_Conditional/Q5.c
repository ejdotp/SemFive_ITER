//TELECOM PLAN RECOMEND:
#include <stdio.h>
void main()
{
	float min, data;
	
	printf("How much talktime do you require in minutes? ");
	scanf("%f", &min);
	printf("How much data do you requre in GB? ");
	scanf("%f", &data);

	printf("Your recommended plan is: \n");
	if( min <= 100 && data <= 1 ){
		printf("Plan A: $30 per month for 100 minuites talktime & 1 GB data\n");
	}else if(min <= 300 && data <= 5){
		printf("Plan B: $50 per month for 300 minutes talktime & 5 GB data\n");
	}else if( data <= 10 ){
		printf("Plan C: $70 per month for unlimited talktime & 10 GB data\n");
	}else{
		printf("Sorry. We don't have a suitable plan for you :(\n");
	}
}
