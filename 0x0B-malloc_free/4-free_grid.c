#include "main.h"
#include<stdlib.h>
#include<stdio.h>

/**
 * free_grid - frees memory
 * @grid: input value
 * @height: int
 * Return:0
 */

void free_grid(int **grid, int height)
{
	int e;

	for (e = 0 ; e < height ; e++)
	{
		free(grid[e]);
	}
	free(grid);
}
