#include "holberton.h"

/**
 * _strlen - returns the length of a string
 * @s: str
 * Return: str length
 */

int _strlen(char *s)
{
	int len, i;

	len = 0;

	for (i = 0; s[i]; i++)
	{
		len++;
	}
	return (len);
}
