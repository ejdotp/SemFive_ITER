//program to display the count of each character in string:

#include <stdio.h>
#include <string.h>

int main()
{
	char str[] = "AABBSSGDDKKKFFYTYWEWFFFFIIGGOOWWNHH";
	int count[256] = {0};
	int length = strlen(str);
	for(int i = 0; i < length; i++){
		if(str[i] != '\n'){
			count[(int)str[i]]++;
		}
	}
	
	printf("Character Counrs:\n");
	for(int i = 0; i < 256; i++){
		if(count[i] > 0){
			printf("'%c' : %d\n", i, count[i]);
		}
	}
	
	return 0;
}
