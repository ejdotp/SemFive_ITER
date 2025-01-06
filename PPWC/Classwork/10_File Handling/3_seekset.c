//count vowels in a file:

#include <stdio.h>

int main()
{
	char st[] = "Hello,world";
	FILE *fp = fopen("d1.txt", "w");
	if(fp != NULL)
	{
		fputs(st, fp);
		fclose(fp);
	}
	
	fp = fopen("d1.txt", "r");
	if( fp != NULL ){
		fseek(fp, 10, SEEK_SET);
		char ch = fgetc(fp);
		printf("%c\n", ch);
		fclose(fp);
	}
	
	return 0;
}
