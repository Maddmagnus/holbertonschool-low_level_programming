#include "holberton.h"

/**
 * leet - leet hacker status
 * @s: string
 * Return: leet string
 */

char *leet(char *s)
{
	int i, j;
	char b[] = "aeotlAEOTL";
	char a[] = "4307143071";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; b[j]; j++)
		{
			if (s[i] == b[j])
				s[i] = a[j];
		}
	}
	return (s);
}
