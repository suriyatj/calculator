#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a,b;
	printf("Enter First number: ");
	scanf("%d", &a);
	printf("Enter Second number: ");
	scanf("%d", &b);
	printf("Addition of given two numbers is %d\n", a+b);
	printf("Enter First number: ");
	scanf("%d", &a);
	printf("Enter Second number: ");
	scanf("%d", &b);
	printf("Substraction of given two numbers is %d\n", a-b);
	return 0;
}