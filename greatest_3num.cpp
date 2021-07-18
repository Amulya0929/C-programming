#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter 3 numbers:");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c)
	printf("\n a=%d is greater");
	else 
	{ if (b>c)
	printf("\n b=%d is greater");
	else
	printf("\n c=%d is greater");
	}
	return 1;
}
