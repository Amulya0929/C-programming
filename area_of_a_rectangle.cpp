#include<stdio.h>
int main ()
{
	int length,breadth,area,perimeter;
	printf("Enter length");
	scanf("%d",&length);
	printf("Enter breadth");
	scanf("%d",&breadth);
	area = length*breadth;
	perimeter = 2*length + 2*breadth;
	printf("area of a rectangle %d\n",area);
	printf("perimeter of a rectangle %d\n",perimeter);
	return 0;
	
}
