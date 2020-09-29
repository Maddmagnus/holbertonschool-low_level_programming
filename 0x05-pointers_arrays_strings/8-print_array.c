#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints ints
 * @a: array
 * @n: numbers for array
 */

void print_array(int *a, int n)
{
	int b = 0;

	while (b < n)
	{
		printf("%d", a[b]);
		if (b < (n -1))
		{
			printf(",");
		}
		b++;
	}
	printf("\n");
}
