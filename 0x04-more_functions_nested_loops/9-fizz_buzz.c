#include <stdio.h>

/**
 * main - prints numbers replaces with fizz & buzz
 * Return:0
 */

int main(void)
{
	int i;
	int n = 100;

	for (i = 1; i <= n; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz");
		}
		else if ( i % 3 != 0 && i % 5 ==0)
		{
			printf("Buzz");
		}
		else if (i % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
		{
			_putchar(' ');
		}
	}
	print("\n");
	return (0);
}
