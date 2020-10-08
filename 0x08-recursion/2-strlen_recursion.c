#include "holberton.h"

/**
 * _strlen_recursion - prints length of string
 * @s: string
 * Return: length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s++) + 1 );
}
