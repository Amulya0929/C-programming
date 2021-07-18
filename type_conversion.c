#include<stdio.h>
int main()
{
	int n,res;
	float aI,aE;
	printf("Enter the number :");
	scanf("%d",&n);
	aI=n*0.7;
	printf("\n Implicit conversion %f",aI);
	aE=(float)n*0.7;
	printf("\n Explicit conversion %f",aE);
	return 1;
}
