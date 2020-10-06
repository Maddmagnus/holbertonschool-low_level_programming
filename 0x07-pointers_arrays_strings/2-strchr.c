#include "holberton.h"

/**
 * _strchr - locator function
 * @s: where its found out
 * @c: place to find char
 * Return: where its returned
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (i = 0; s[1] >= '\0'; i++
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return ('\0');
}
