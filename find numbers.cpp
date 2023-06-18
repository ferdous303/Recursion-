#include<stdio.h>
int printnumber( int n)
{
	if ( n==0)
	{
		return 1;
	}
	printnumber ( n-1);
	printf ("%d  ",n);
}
int main()
{
	int num;
	scanf("%d",&num);
	printnumber( num);
	
}
