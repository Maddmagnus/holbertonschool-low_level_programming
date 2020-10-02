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
	char cap[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(',
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
				if (s[j + 1] >= 'a' && s[j + 1] <= 'z')
				{
					s[j + 1]  = s[j + 1] - ' ';
				}
			}
				else
				{
					s[j] = s[j];
				}
			i++;
		}
		j++;
	}
	return (s);
}
