/*nested struct:
struct innerstruct{
	members of inner;
};
struct outstruct{
	struct innerstruct var1; //accessing struct inside another
};
*/

#include <stdio.h>
#include <string.h>
struct Dob{
	int day;
	int month;
	int year;
};
struct Student{
	int id;
	char name[20];
	struct Dob d1;
};
int main()
{
	struct Student s1;
	strcpy(s1.name, "Alice");
	printf("Enter student ID: ");
	scanf("%d", &s1.id);
	printf("Enter student DOB: ");
	scanf("%d%d%d", &s1.d1.day, &s1.d1.month, &s1.d1.year);
	
	//struct Student s1 = {101, "Alice", date}; compile time initialization
	printf("Name = %s\nId = %d\nDOB = %d/%d/%d\n", s1.name, s1.id, s1.d1.day, s1.d1.month, s1.d1.year);
	return 0;
}

