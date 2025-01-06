//CONCAT TWO STRINGS WITHOUT LIBRARY FUNCTIONS

#include <stdio.h>
void concatenate(char str1[], char str2[]);

int main()
{
	char str1[100] = "abcdefg";
	char str2[] = "hijklmnop";
	concatenate(str1, str2);
	printf("Concatenated String: %s\n", str1);
	return 0;
}

void concatenate(char str1[], char str2[])
{
	int i = 0, j = 0;
	
	while(str1[i] != '\0'){
		i++;
	}
	
	while(str2[j] != '\0'){
		str1[i] = str2[j];
		i++;
		j++;
	}
	
	str1[i] = '\0';
}
