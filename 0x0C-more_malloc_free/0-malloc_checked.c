#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>
/**
 * malloc_checked - frees memory
 * @b: object
 * Return: 0
 */

void *malloc_checked(unsigned int b)
{
	int *i;

	i = malloc(b);

	if (i == NULL)
		exit(98);

	return(i);
}
