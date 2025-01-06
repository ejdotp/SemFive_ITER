//euclid gcd:
#include <stdio.h>
 
void main()  
{  
	int n1, n2, a, b, c=1;  
    printf("Enter the number1: ");  
    scanf("%d", &n1); 
    printf("Enter the number1: ");  
    scanf("%d", &n2);

	a = (n1 < 0)?-n1:n1;  //abs value of a
	b = (n2 < 0)?-n2:n2;  //abs value of b
    	
    if(a>b){
    	a = a+b;
    	b = a-b;
    	a = a-b;
    }
    
    while(c != 0){
    	c = a%b;
    	a = b;
    	b = c;
    }
    printf("gcd = %d\n", a);
}  
