#include<stdio.h>
/* function declaration */
int fact(int a);

void main()
{
	int result = fact(5);
	printf("%d", result);
}
/*function definition */
int fact(int a)
{
	if (a > 0)
	{
		return a * fact(a - 1);
	}
	else
	{
		/*return one because if it return zero the result will be zero*/
		return (1);
	}
}
