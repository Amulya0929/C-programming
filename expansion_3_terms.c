#include<math.h>
#include<stdio.h>
int main()
{
	double x,i,sum,sign,m,n,d;
	sum=0;
	printf("Enter the value of x :");
	scanf("%lf",&x);
	for(i=1;i<=3;i++)
	{
		sign=pow(-1,i);
		m=pow(x,i);
		sum=sum+((sign*m)/2*i);
	}
printf("sum=%lf",sum);
return 0;	
}
