#include <stdio.h>

/**
 * main - loops to print all number combos
 * Return: number combos
 */

int main(void)
{
	int i = 0;
	int j = 0;
	int k;
	int l;

	while (i <= 9)
	{
		while (j <= 9)
		{
			k = i + '0';
			putchar(k);
			l = j + '0';
			putchar(l);
			if ( i == 9 && j == 9)
			{
				putchar('\n');
			}
			else
			{
				putchar(',');
					putchar(' ');
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
