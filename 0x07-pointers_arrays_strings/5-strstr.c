#include "holberton.h"

/**
 * _strstr - finds string within
 * @haystack: first string
 * @need: what were looking for
 * Return: null
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	while (*haystack != '\0')
	{
		for (i = 0; haystack[i] == needle[i] && haystack[i] != '\0'; i++)
		{
			if (*needle == '\0')
				return (haystack);
		}
		haystack++;
	}
	return ('\0');
}
