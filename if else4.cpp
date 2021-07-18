#include<stdio.h>
int main()
{
	int ch;
	printf("Enter a character");
	scanf("%c",&ch);
	if((ch>='a'&& ch<='z')||(ch>='A'&& ch<='Z'))
	printf("the given character is alphabet");
	else
	printf("the given character is not an alphabet");
	return 1;
	
}
