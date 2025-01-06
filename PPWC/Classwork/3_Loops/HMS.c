//menu driven program for patient billing system: multiple patients, additional services, total revenue in end
#include <stdio.h>
void main()
{
	int ptqt, tots = 0, ptotal = 0, dailycharge = 0, days = 0, extra;
	printf("Enter the number of patients: ");
	scanf("%d", &ptqt);

	for(int i = 1; i <= ptqt; i++){
		printf("\nPatient %d: \n", i);
		printf("Enter the number of days stayed: ");
		scanf("%d", &days);
		printf("Enter the daily charge: ");
		scanf("%d", &dailycharge);
		ptotal = days*dailycharge;
		printf("Enter the number of aditional services (tests, surgeries): ");
		scanf("%d", &extra);
		int temp;
		for(int j = 1; j <= extra; j++){
			printf("Enter the cost of service %d: ", j);
			scanf("%d", &temp);
			ptotal += temp;
		}
		printf("\nTotal bill for patient %d: %d.00\n\n", i, ptotal);
		tots += ptotal;
	}
	printf("\nTotal revenue for the hosptial: %d.00\n", tots);
}
