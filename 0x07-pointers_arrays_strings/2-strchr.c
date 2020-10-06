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

	while (s[i] != c && s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	return (0);
}
