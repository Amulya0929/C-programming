#include<stdio.h>
int main()
{
	int i=1,rem,num,binary=0;
	printf("enter a number");
	scanf("%d",&num);
	while(num!=0)
	{
		rem=num%2;
		num=num/2;
		binary=binary+i*rem;
		i=i*10;
	}
	printf("Binary number of %d is %d",num,binary);
	return 0;
}
