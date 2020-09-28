#include <stdio.h>

/**
 * main - prints combinations of single digits
 * Return: combinations
 */

int main(void)
{
	int a = '0';

	while (a <= '9')
	{
		putchar(a);
		if ( a != '9')
		{
			putchar(',');
			putchar(' ');
		}
		++i;
	}
	putchar('\n');
	return (0);
}
