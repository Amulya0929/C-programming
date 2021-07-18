#include<stdio.h>
int main()
{
	int a[10],i,n,pos,new1;
	printf("Enter the size of array :");
	scanf("%d",&n);
	printf("Enter the elements in the array :");
	for(i=0;i<n;i++)
	{
	   scanf("%d",&a[i]);
	}
	printf("Enter the position of array :");
	for(i=pos;i<n;i++)
	a[i+1]=a[i];
	a[pos]=90;
    {
	   scanf("%d",&pos);
    }
	printf("Enter new element :");
	scanf("%d",&new1);
	printf("before inserting :");
	
	printf("after inserting :");
	return 1;
}
