#include "holberton.h"

/**
 * print_sign - prints sign related to number
 * @n: int n
 * Return: returns number based on int
 */

int print_sign(int n)
{
	if (n >= 1)
	{
		_putchar('+');
		return (1);
	}
	if (n <= -1)
	{
		_putchar('-')
			return (-1);
	}
	else
		_putchar('0');
	return (0);
}
