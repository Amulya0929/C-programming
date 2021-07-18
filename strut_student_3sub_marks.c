#include<stdio.h>
struct student
{
	char Name[100];
	int rno;
	int Marks[3];
};
int main()
{
	struct student s1,s2;
	int i;
	printf("enter the details of student 1 :");
	scanf("%s%d",&s1.Name,&s1.rno);
	printf("Enter 3 subjects marks :");
	for(i=0;i<3;i++)
	    scanf("%d",&s1.Marks[i]);
	printf("enter the details of student 2 :");
	scanf("%s%d",&s2.Name,&s2.rno);
	printf("Enter 3 subjects marks :");
	for(i=0;i<3;i++)
	    scanf("%d",&s2.Marks[i]);
	printf("\n The students details are : \n");
	printf(".................................");
	printf("\n NAME      RNO      M1      M2      M3");
	printf("\n %s %d",&s1.Name,&s1.rno);                                         
	for(i=0;i<3;i++)
	printf("%d",&s1.Marks[i]);
	printf("\n %s %d",&s2.Name,&s2.rno);
	for(i=0;i<3;i++)
	printf("%d",&s2.Marks[i]);	
}

