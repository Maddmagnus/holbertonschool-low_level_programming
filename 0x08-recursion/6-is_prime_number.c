#include "holberton.h"

/**
 * is_prime_number - returns 1 if prime
 * @n: int
 * Return: 1 or 0
 */
int is_prime_numbert(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	return (_prime_assist(n, 2));
}

/**
 * _prime_assist - finds prime
 * @x: int
 * @y: iteration
 * Return: 1 or 0
 */
int _prime_assist(int x, int y)
{
	if (x % y == 0)
		return (0);
	else if (y * y > x)
		return (1);
	return (_prime_assist(x, y + 1));
}
