#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints alphabet without e and q
 * Return: alphabet
 */

int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
		c = c + 1;
	}
	putchar('\n');
	return (0);
}
