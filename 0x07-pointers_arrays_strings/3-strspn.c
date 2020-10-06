#include "holberton.h"

/**
 * _strspn - function that finds string length
 * @s: string
 * @accept: location to find
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int counter = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (count != i)
			break;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				counter++;
			}
		}
	}
	return (counter);
}
