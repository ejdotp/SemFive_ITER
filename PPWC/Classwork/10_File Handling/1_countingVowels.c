//count vowels in a file:

#include <stdio.h>
#include <ctype.h>

int isVowel(char c)
{
	c = toupper(c);
	return (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

int main()
{
	//creating and writing in file
	char str[] = "My name is khan.";
	FILE *fp = fopen("data.txt", "w");
	if(fp != NULL)
	{
		fputs(str, fp);
		fclose(fp);
	}
	
	//main solution
	int sum = 0;
	char st2;
	fp = fopen("data.txt", "r");
	if(fp != NULL)
	{
		do{
			st2 = fgetc(fp);
			printf("%c", st2);
			if( isVowel(st2) ){
				sum++;
			}
		}while(st2 != EOF);
		
		/*
		or:
		while((st2=fgetc(fp)) != EOF){
			if(isVowel(st2))
				sum++;
		}
		*/
	}
	fclose(fp);
	
	printf("\nNo. of vowels = %d\n", sum);
	
	return 0;
}
