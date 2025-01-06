/*Write a C structure named Employee containing the following members: emp_code, emp_name, emp salary. define a user defined function input_emp() which accepts a structure variable and returns 1 if salary>10000.5*/

#include <stdio.h>
#include <string.h>

struct Employee{
	int emp_code;
	char emp_name[50];
	float emp_salary;
};                  

int input_emp(struct Employee e){
	printf("Enter Employee ID: ");
	scanf("%d", &e.emp_code);
	printf("Enter Employee Name: ");
	scanf("%s", e.emp_name);
	printf("Enter Employee Salary: ");
	scanf("%f", &e.emp_salary);
	if(e.emp_salary > 10000.5)
		return 1;
	return 0;
}

int main()
{
	struct Employee e1;
	if(input_emp(e1))
		printf("Good Salary.\n");
	else
		printf("Bad Salary.\n");
	return 0;
}

