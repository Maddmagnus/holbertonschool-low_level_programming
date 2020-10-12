#include "holberton.h"

/**
 * _sqrt_recursion - returns square root of a number after checking it
 * @n: number to be evaluated
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	return (_sqrt_assist(n, i));
}

/**
 * _sqrt_assist - returns value or root
 * @x: number
 * @y: exponent
 * Return: 0 or 1
 */
int _sqrt_assist(int x, int y)
{
	if (y * y > x)
	return (-1);
	if (y * y == x)
	return (y);
	return (_sqrt_assist(x, y + 1));
}
