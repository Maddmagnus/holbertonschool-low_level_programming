#include "holberton.h"

/**
 * *_strcpy - copies string
 * @dest: destination
 * @src: source
 * @n: string limit
 * Return: dest
 */

char *_strcpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
