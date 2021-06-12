#include<stdio.h>
int main()
{
	double area,perimeter,radius,pi;
	printf("Enter the radius");
	scanf("%lf",&radius);
	pi = 3.14;
	area = pi*radius*radius;
	perimeter = 2*pi*radius;
	printf("Area of a circle %lf\n",area);
	printf("Perimeter of a circle %lf\n",perimeter);
	return 0;
}
