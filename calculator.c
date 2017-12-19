#include <stdio.h>
int sum (int a,int b)
{
	printf("Addition of given two numbers is %d\n", a+b);
	return 0;
}
int diff (int a,int b)
{
	printf("Substraction of given two numbers is %d\n", a-b);
	return 0;
}	
int prod (int a,int b)
{
	printf("Product of given two numbers is %d\n", a*b);
	return 0;
}
int div (int a,int b)
{
	if (b==0)
	{
		printf("The division is not possible\n");
		return -1;
	}
	printf("%d/%d is %d  ", a,b,a/b);
	printf("and the remainder is %d\n", a%b);
	return 0;
}	
int main(int argc, char const *argv[])
{
	int a,b;
	printf("Enter First number: ");
	scanf("%d", &a);
	printf("Enter Second number: ");
	scanf("%d", &b);
	c=sum(a,b);
	c=diff(a,b);
	c=prod(a,b);
	c=div(a,b);
	return 0;
}

	
