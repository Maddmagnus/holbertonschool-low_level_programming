#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - creates 2d array
 * @width: width
 * @height: height
 * Return: array
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	if (width < 1 || height < 1)
		return(NULL);

	array = malloc(sizeof(*array) * height);

	if (array == NULL)
	{
		free(array);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(*(array[i])) * width);
		if (array[i] == 0)
		{
			free(*array);
			free(array);
			return (NULL):
		}
	}
	for (j = 0; j < width; j++)
	{
		array[i][j] = 0;
	}
	return (array);
}
