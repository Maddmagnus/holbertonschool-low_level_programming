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
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
