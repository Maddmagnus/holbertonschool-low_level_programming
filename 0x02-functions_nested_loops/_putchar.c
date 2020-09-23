#include <unistd.h>

/**
 * _putchar - writes stdout characters
 * @c: the character
 * Return: 1 if success
 * on error, -1
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
