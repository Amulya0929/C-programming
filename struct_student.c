#include<stdio.h>
struct student
{
	int rno;
	char Name[20];
	float marks;
}s;
int main() 
{
	struct student s;
	printf("\n Enter rno :");
	scanf("%d",&s.rno);
	printf("\n Enter Name :");
	scanf("%s",&s.Name);
	printf("\n Enter marks :");
	scanf("%f",&s.marks);
	printf("\n The student details are %d %s %f ",s.rno,s.Name,s.marks );
}

