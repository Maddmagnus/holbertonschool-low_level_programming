#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * create_array - creates array
 * @size: size of array
 * @c: char
 * Return: returns success or fail
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (0);

	array = malloc(size * sizeof(char));

	for (i = 0; i <= size; i++)
	{
		array[i] = c;
	}
	array[i] = c;
	return (array);
}