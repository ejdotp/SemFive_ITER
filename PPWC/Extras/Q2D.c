#include <stdio.h>
void dispense(int);

int main()
{
	int amount = 4530;
	dispense(amount);
	return 0;
}

void dispense(int a)
{
	int ths = 0, hun = 0, fift = 0, ten = 0;
	if( a > 1000 ){
		ths = a/1000;
		a = a - (ths*1000);
	}
	if( a > 100 ){
		hun = a/100;
		a = a - (hun*100);
	}
	if( a > 50 ){
		fift = a/1000;
		a = a - (fift*50);
	}
	if( a > 10 ){
		ten = a/10;
		a = a - (ten*10);
	}
	
	printf("Thousands = %d\nHundreds = %d\nFifties = %d\nTens = %d\n", ths, hun, fift, ten);
}
