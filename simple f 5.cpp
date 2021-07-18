#include<stdio.h>
int main()
{
	int num1;
	printf("Enter a number: ");
	scanf("%d",&num1);
	
	if (num1%3==0)
	printf("number is divisible by 3 ");
	
	if (num1%5==0)
	printf("number is divisible by 5");
	return 1;
}
