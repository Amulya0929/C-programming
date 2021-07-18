#include<stdio.h>
struct employee
{
	char Name[20];
	int eno;
	int salary;
}e;
int main()
{
	struct employee e;
	printf("Enter the employee name :");
	scanf("%s",&e.Name);
	printf("Enter the employee eno:");
	scanf("%d",&e.eno);
	printf("Enter the employee salary :");
	scanf("%d",&e.salary);
	printf("The employee details are %s %d %d",&e.Name,&e.eno,&e.salary);
}


