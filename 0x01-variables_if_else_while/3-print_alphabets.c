#include <stdio.h>

/**
 * main - prints alphabet x2
 * Return: prints alphabet
 */

int main(void)
{
	char a = 'a';
	char A = 'A';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	while (A <= 'Z')
	{
		putchar(A);
		A++;
	}
	putchar('\n');
	return(0);
}
