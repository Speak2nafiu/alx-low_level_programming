#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid -frees memory of a grid of integers
 * @grid: the address of the two dimensional grid
 *
 * @height: height of the grid
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (height <= 0)
	{
		free(grid);
	}

	i = 0;
	while (i < height)
	{
		free(grid[i]);
		++i;
}
	free(grid);
}

