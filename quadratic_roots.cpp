#include<stdio.h>
#include<math.h>
int main()
{
	float root1,root2;
	int a,b,c;
	printf("Enter coefficient of x^2:");
	scanf("%d",&a);
	printf("Enter coefficient of x:");
	scanf("%d",&b);
	printf("Enter coefficient of constant:");	
	scanf("%d",&c);
	root1 = (-b + sqrt(b*b-4*a*c))/2*a*c;
	root2 = (-b - sqrt(b*b-4*a*c))/2*a*c;
	printf("\n root1 = %f root2 =%f",root1,root2);
	return 0;
}