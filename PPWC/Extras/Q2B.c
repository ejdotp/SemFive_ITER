//Merging two sorted arrays:

#include <stdio.h>
void fun(int n);

int main()
{
    fun(4);
    printf("\n");
    return 0;
}

void fun(int n)
{
	if(n>0){
		fun(n-1);
		printf("%d", n);
		fun(n-1);
	}
}


