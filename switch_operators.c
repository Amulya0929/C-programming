#include<stdio.h>
int main()
{
	int num1 ,num2, result;
	float div;
	char op;
	printf("Enter 2 numbers: \n");
	scanf("%d%d",&num1,&num2);
	printf("Enter an operator: \n");
	scanf("\n%c",&op);
	switch(op)
	{
		case '+' : result= num1 + num2;
		printf("The sum of 2 numbers is %d", result);
		break;
		case '-' : result= num1 - num2;
		printf("The difference of 2 numbers is %d",result);
		break;
		case '*' : result= num1 * num2;
		printf("The product of 2 numbers is %d",result);
		break;
		case '/' : div= num1 / num2;
		printf("The division of 2 numbers is %f",div);
		break;
		case '%' : result= num1 % num2;
		printf("The remainder of 2 numbers is %d",result);
		break;
	    default:printf("Invalid operator");
	    break;
		
	} 
}
