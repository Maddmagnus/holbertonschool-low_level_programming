#include "bootcamp.h"
/**
 * string_toupper - converts lower to upper
 * @s: string
 * Return: string after converstion
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] >= 96 && s[i] <= 123)
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
