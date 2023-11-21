#include "main.h"
/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers
 * @width: int
 * @height: int
 * Return: 0
 */
int **alloc_grid(int width, int height)
{
	int n, i;
	int **grid;

	if (width < 1 || height < 1)
		return (NULL);
	grid = malloc(height * sizeof(*grid));

	if (grid == NULL)
		return (NULL);

	for (n = 0; n < height; n++)
	{
		grid[n] = malloc(width * sizeof(**grid));
		if (grid[n] == NULL)
		{
			for (n--; n >= 0; n--)
				free(grid[n]);
			free(grid);
			return (NULL);
		}
		for (i = 0; i < width; i++)
			grid[n][i] = 0;
	}
	return (grid);
}
