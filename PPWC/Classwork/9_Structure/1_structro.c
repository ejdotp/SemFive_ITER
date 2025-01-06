/*defining a structure in C:
STRUCT tAGnAME{
	datatype member1;
	datatype member2;
};

or do it within main:
struct Person p1, p2;

*/

#include <stdio.h>
#include <string.h>
struct Person{
	char name[50];
	int age;
	float height;
};                  //semicolon must

int main()
{
	//struct Person p1, p2; //use this  or write the vars in struct section to declare vars
	struct Person p1;
	strcpy(p1.name, "Alice");
	p1.age = 28;
	p1.height = 5.7;
	printf("Name = %s\nAge = %d\nHeight = %.2f\n", p1.name, p1.age, p1.height);
	return 0;
}

