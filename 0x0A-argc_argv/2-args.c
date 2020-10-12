#include <stdio.h>

/**
 * main - prints given arguments
 * @argc: number of args
 * @argv: array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
