#include "holberton.h"

/**
 * swap_int - swaps the value
 * @a: int
 * @b: int
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
