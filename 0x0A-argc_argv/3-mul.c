#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies 1 & 2 to create multi
 * @argc: arguments
 * @argv: string
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int multi;

	multi = 0;

	if (argc == 3)
	{
		multi = (atoi(argv[1]) * atoi(argv[2]));
		printf("%d\n" , multi);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
