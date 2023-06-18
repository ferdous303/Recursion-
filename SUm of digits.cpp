#include<stdio.h>
int Add( int number)
{
	if ( number <=0)
	{
		return number;
	}
	return Add( number / 10) + ( number % 10);
}
int main()
{
	int num;
	printf("enter any number :");
	scanf("%d",&num);
	int sum=(Add(num));
	printf("The sum of the digits is: %d\n", sum);
}
