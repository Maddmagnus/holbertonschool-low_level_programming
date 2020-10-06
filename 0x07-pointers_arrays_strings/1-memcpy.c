#include "holberton.h"

/**
 * *_memcpy - memory copy
 * @dest: copied place
 * @src: copied from
 * @n: number of bytes
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
