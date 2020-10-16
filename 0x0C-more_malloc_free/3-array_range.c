#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - array
 * @min: min
 * @max: max
 * Return: 0
 */

int *array_range(int min, int max)
{
	int *array;
	int i, size;

	size = (max - min) + 1;

	if (min > max)
		return (NULL);
	array = malloc(size * sizeof(int));
	if (array == NULL)
		return (NULL);
	for (i = 0; i <= size; i++)
		array[i] = min++;
	return (array);
}
