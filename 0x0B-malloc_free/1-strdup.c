#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - duplicates a string
 * @str: dupes string
 * Return: duplicated string
 */

char *_strdup(char *str)
{
	char *array;
	int size, i;


	if (str == NULL)
		return (NULL);

	for (size = 0; str[size] != '\0'; size++)
	{
	}
	size++;
	array = malloc(size * (sizeof(char)));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = str[i];
	}

	return (array);
}
