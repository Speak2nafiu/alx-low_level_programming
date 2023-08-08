#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - prints a grid of integers
 * @width: width of the grid
 * @height: height of the grid
 * Return: Nothing.
 */
int **alloc_grid(int width, int height)
{
	int i;	int j;	int **grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = (int **)malloc(height * sizeof(int *));
	if (grid != NULL)
	{
		i = 0;
		while (i < height)
		{
			grid[i] = (int *)malloc(width * sizeof(int));
			j = 0;
			while (j < width)
			{
				grid[i][j] = 0;
				++j;
			}
			++i;
		}
	}
	else
	{
		free(grid);
	}
	return (grid);
}
