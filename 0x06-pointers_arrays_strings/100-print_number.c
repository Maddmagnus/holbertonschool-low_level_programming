#include "holberton.h"

/**
 * print_number - print int
 * @n: int
 * Return: int
 */
void print_number(int n)
{

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n > 0)
	{
		_putchar(n / 10 + '0');
		_putchar((n % 10) + '0');
	}
}
