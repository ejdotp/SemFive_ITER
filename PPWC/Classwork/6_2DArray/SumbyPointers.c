//sum of elements using array of pointers
#include <stdio.h> 
 
int main()  
{  
    int sum, a = 10, b = 20, c = 30, d = 40, e = 50;  
	int *p[5];
	p[0] = &a;
	p[1] = &b;
	p[2] = &c;
	p[3] = &d;
	p[4] = &e;
		
	for(int i = 0; i < 5; i++){
		sum += *p[i];
	}
	
	printf("Sum = %d\n", sum);
	
	return 0;
}  
