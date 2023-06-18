#include<stdio.h>
int printAdd( int n)
{
	if ( n==1)
	{
		return 1;
	}
return	n+printAdd ( n-1);
	
}
int main()
{
	int num;
	printf("enter any number:");
	scanf("%d",&num);
  int res=	printAdd( num);
	printf ("%d  is the sum ",res);
}
