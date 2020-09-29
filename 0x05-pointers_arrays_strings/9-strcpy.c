#include "holberton.h"

/**
 * _strcpy - copies the string
 * @dest: where string gets copied
 * @src: string
 * Return: location for string
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i); i++)
	{
		*(dest + i) = *(src + i);
	}
	*(dest + i) = '\0';
	return (dest);
}
