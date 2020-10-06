#include "holberton.h"

/**
 * _strspn - function that finds string length
 * @s: string
 * @accept: location to find
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
			if (s[i] == '\0')
				return (i);
		}
	}
	return (0);
}
