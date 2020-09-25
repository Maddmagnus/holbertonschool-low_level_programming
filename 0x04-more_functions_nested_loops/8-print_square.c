#include "holberton.h"

/**
 * print_square -function that prints square
 * @size: length
 * Return: square
 */

void print_square(int size)
{
	int i;
	int j;

	for (i = 1; i <= size; j++)
	{
		for (j = 1; j <= size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
