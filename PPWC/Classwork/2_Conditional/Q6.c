//hOSPITAL bILL:
#include <stdio.h>
void main()
{
	char a, b, c, d;
	int total = 0;
	
	printf("Options: \n1. General Checkup - $50\n 2. Specialist Consultation - $100\n 3. Emergency Treatment - $200\n 4. Surgery - $1000\n");
	
	printf("do you need option 1? (Y/n)");
	scanf(" %c", &a);
	printf("\n");
	printf("do you need option 2? (Y/n)");
	scanf(" %c", &b);
	printf("\n");
	printf("do you need option 3? (Y/n)");
	scanf(" %c", &c);
	printf("\n");
	printf("do you need option 4? (Y/n)");
	scanf(" %c", &d);
	
	if(a == 'Y'){ total += 50; }
	if(b == 'Y'){ total += 100; }
	if(c == 'Y'){ total += 200; }
	if(d == 'Y'){ total += 1000; }
	
	printf("Total is %d\n", total);

}
