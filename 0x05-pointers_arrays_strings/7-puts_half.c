#include "holberton.h"

/**
 * puts_half - counts string then prints half
 * @str: string
 * Return: void
 */
void puts_half(char *str)
{
	int len, i, j;

	len = 0;

	for (i = 0; str[i]; i++)
	{
		len++;
	}
	len = (len -(len/2));
	for (n = len; str[n]; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
