#include "holberton.h"

/**
 * print_triangle - draws a triangle
 * @size: triangle size
 * Return: triangle
 */

void print_triangle(int size)
{
	int row, colum;

	if (size > 0)
	{
		for (row = 1;row <= size; row++)
		{
			for (col = 1; col <= size; col++)
			{
