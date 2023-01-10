#include "main.h"

/**
 * free_grid - frees a two dimensional grid created by alloc_grid
 *
 * @grid: grid to be freed
 * @height: height of the grid
 *
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
		grid[i] = NULL;
	}
	free(grid);
	grid = NULL;
}

