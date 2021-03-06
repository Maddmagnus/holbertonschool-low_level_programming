#include "holberton.h"
/**
 * *_strncat - concats two strings
 * @dest: destination
 * @src: source
 * @n: copied part
 * Return: destination
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;
	for (j = 0; j < n && src[j] != '\0'; j++, i++)
		dest[i] = src[j];
		dest[i] = '\0';
	return (dest);
}
