//count vowels in a file:

#include <stdio.h>

int main()
{
	char st[] = "Hello,world";
	FILE *fp = fopen("d2.txt", "w");
	if(fp != NULL)
	{
		fputs(st, fp);
		fclose(fp);
	}
	
	fp = fopen("d2.txt", "r");
	if( fp != NULL ){
		fseek(fp, 0, SEEK_END);
		char ch = fgetc(fp);
		printf("%c\n", ch);
		fclose(fp);
	}
	fp = fopen("d2.txt", "r");
	if( fp != NULL ){
		fseek(fp, -1, SEEK_END);
		char ch = fgetc(fp);
		printf("%c\n", ch);
		fclose(fp);
	}
	return 0;
}
