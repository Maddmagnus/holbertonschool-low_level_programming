#include "holberton.h"

/**
 * rev_string - reverses string
 * @s: str
 * Return: void
 */

void rev_string(char *s)
{
	int front, back;
	char *str = s;

	for (front = 0; *(s + front); front++)
	{
		*(str + front) = *(s + front);
	}

	back = 0;
	for (front = front - 1; front >= 0; front--)
	{
		*(s + front) = *(str + back);
		back++;
	}
}
