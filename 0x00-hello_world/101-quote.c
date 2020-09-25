#include <stdio.h>
#include <unistd.h>

/**
 * main - writes quotation
 * Return: string
 */
int main(void)
{
	write(2, "and that piecce of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
