#include "holberton.h"

/**
 * _strcat - concats strings
 * @dest: destination
 * @src: string
 * Return: destination
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	for (j = 0; src[j] != '\0'; j++, i++)
		dest[i + j] = src[i];
	dest[i + j + 1] = '\0';
	return (dest);
}
