#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * free_grid - creates a 2d grid
 * @grid: 2d grid
 * @height: size of 2d grid
 * Return: the grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for(i = 0; i < height; i++)
	{
	free(grid[i]);
	}
	free(grid);
}
