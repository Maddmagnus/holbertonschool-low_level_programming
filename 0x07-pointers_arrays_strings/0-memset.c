#include "holberton.h"

/**
 * _memset - fills memory with byte
 * @s: memory
 * @b: btye
 * @n: bytes filling
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
