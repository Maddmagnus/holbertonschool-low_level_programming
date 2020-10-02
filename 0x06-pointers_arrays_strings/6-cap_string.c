#include "holberton.h"

/**
 * cap_string - capitilize words
 * @str: string
 * Return: capital words
 */

char *cap_string(char *str)
{
	int i = 0;
	int j = 0;
	char cap[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(',
		      ')', '{', '}'};

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - ' ';
	while (str[i])
	{
		while (j < 13)
		{
			if (str[i] == cap[j])
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
					str[i + 1] -= 32;
			}
				j++;
		}
			i++;
			j = 0;
	}
	return (str);
}
