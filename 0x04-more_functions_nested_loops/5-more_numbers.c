#include "holberton.h"

/**
 * more_numbers - prints 0-14 10 times
 * Return: numbers
 */

void more_numbers(void)
{
	int n = 0;
	int a;

	while (n < 10)
	{
		a = 0;
		while (a <= 14)
		{
			if (a > 9)
				_putchar(a / 10 + '0');
			_putchar(a % 10 + '0');
			a++;
		}
		n++;
		_putchar('\n');
	}
}
