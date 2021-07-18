#include<stdio.h>
int main()
{
	float p,r,t,simpleinterest;
	printf("Enter p,r,t");
	scanf("%f%f%f",&p,&r,&t);
	simpleinterest = (p*r*t)/100;
	printf("\n simple interest is %f",simpleinterest);
	return 0;
}
