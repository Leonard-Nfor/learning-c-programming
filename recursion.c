#include<stdio.h>
int add(int a);
/* function that add range of numbers */
void main()
{
	/* function calling */
	int result = add(4);
	printf("%d", result);
}
/* function definition */
int add(int a)
{
	if (a > 0)
	{
		return a + add(a - 1);
	}
	else
	{
		return (0);
	}
}
