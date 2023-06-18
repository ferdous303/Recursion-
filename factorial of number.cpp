#include<stdio.h>
int fact (  int n)
{
	if ( n==1)
	{
		return 1;
	}
	return n* fact(n-1);
}
int main()
{
	int num;
	printf("enter any number:");
	scanf("%d",&num);
	int factorial=( fact ( num));
	printf("%d is the factorial",factorial);
}
