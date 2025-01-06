//count vowels in a file:

#include <stdio.h>

int main()
{
	//creating and writing in file1
	char st1[] = "My name ";
	FILE *fp1 = fopen("file1.txt", "w");
	if(fp1 != NULL)
	{
		fputs(st1, fp1);
		fclose(fp1);
	}
	
	//creating and writing in file2
	char st2[] = "is khan.";
	FILE *fp2 = fopen("file2.txt", "w");
	if(fp2 != NULL)
	{
		fputs(st2, fp2);
		fclose(fp2);
	}
	
	//main solution
	FILE *fp3 = fopen("file12.txt", "w");  //create file12.txt
	fclose(fp3);
	char c[100];
	fp3 = fopen("file12.txt", "a");
	fp1 = fopen("file1.txt", "r");
	fp2 = fopen("file2.txt", "r");
	fgets(c, 100, fp1);
	fputs(c, fp3);
	fgets(c, 100, fp2);
	fputs(c, fp3);
	fclose(fp1);
	fclose(fp2);
	fclose(fp3);
	fp3 = fopen("file12.txt", "r");
	if(fp3 != NULL){
		if(fgets(c, 100, fp3)){
			printf("%s\n", c);
		}
		fclose(fp3);
	}
	
	return 0;
}
