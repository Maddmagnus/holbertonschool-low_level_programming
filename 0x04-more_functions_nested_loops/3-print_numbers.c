#include "holberton.h"

/**
 * print_numbers - prints numbers
 * Return:null
 */

void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}