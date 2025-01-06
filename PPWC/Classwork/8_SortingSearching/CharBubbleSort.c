#include <stdio.h>
#include <string.h>
#include <ctype.h>

void Bubbly(char a[], int n);
void print(char a[]);

int main()
{
	char A[] = "bcAjDYgaStyh!@#";
	int n = strlen(A);
	Bubbly(A, n);
	printf("Sorted Array: ");
	print(A);
	return 0;
}

void Bubbly(char a[], int n)
{
    for(int i = 0; i < n; i++)
    {
    	for(int j = 0; j < n - i - 1; j++)
    	{
    	    if(tolower(a[j]) > tolower(a[j + 1]) || 
    	       (tolower(a[j]) == tolower(a[j + 1]) && a[j] > a[j + 1])) 
    	    {
    			char temp = a[j];
    			a[j] = a[j + 1];
    			a[j + 1] = temp;
    		}
    	}
    }
}

void print(char A[])
{
	for(int i = 0; A[i] != '\0'; i++){
		printf("%c ", A[i]);
	}
	printf("\n");
}
