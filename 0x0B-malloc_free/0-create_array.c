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


	array = malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}

	i = 0;
	while (i <= size)
	{
		array[i] = c;
		i++;
	}
	return (array);
}
