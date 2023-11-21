#include "main.h"
/**
 * free_grid - frees a 2-D grid
 * @grid: int
 * @height: int
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int d;

	for (d = 0; d < height; d++)
		free(grid[d]);
	free(grid);
}
