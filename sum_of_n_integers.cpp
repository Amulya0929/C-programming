#include<stdio.h>
int main()
{
	int num, sum;
	printf("Enter a number:\n");
	scanf("%d",&num);
	sum = (num*(num+1))/2;
	printf("The sum of digits is %d",sum);
	return 0;
}
