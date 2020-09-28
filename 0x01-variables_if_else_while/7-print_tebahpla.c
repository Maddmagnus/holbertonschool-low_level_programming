#include <stdio.h>

/**
 * main - prints alphabet backwords
 * Return: alphabet
 */
int main(void)
{
	char a = 'z';

	while (a >= 'a')
	{
		putchar(a);
		a--;
	}
	putchar('\n');

	return (0);
}
