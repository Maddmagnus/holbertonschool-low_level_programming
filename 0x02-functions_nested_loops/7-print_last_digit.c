#include "holberton.h"

/**
 * print_last_digit - prints last digit of a number
 * @n: int
 * Return: 0
 */

int print_last_digit(int n)
{
	int a;

	if (n >= 0)
	{
		a = n % 10;
	}
	else
	{
		a = -n % 10;
	}

	_putchar(a + '0');
	return (a);
}
