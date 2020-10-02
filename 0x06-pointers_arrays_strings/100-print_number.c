#include "holberton.h"

/**
 *
 *
 *
 */
void print_number(int n)
{
	int counter, digit, i;
	int div =  10;

	while (n != 0)
	{
		n = n / 10;
		counter++;
	}
	if (n < 0)
		_putchar('-');

	for (i = counter; i >= 0; i--)
	{
		digit = n / div;
		_putchar(digit + '0';);
	}
}
