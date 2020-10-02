#include "holberton.h"

/**
 * cap_string - capitilize words
 * @s: string
 * Return: capital words
 */

char *cap_string(char *s)
{
	int j = 0;
	int i = 0;
	char cap[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(',
		      ')', '{', '}'};

	if (s[0] >= 'a' && s[0] <= 'z')
	{
		s[0] = s[0] - ' ';
	}
	while (s[i] != '\0')
	{
		while (i < 13)
		{
			if (s[j] == cap[i])
			{
				if (s[j + 1] >= 'a' && <= 'z')
				{
					s[j + 1]  -= 32;
				}
			}
			i++;
		}
		j++;
	}
	return (s);
}
