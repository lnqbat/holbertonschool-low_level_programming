#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 *
 * @width: of array
 * @height: of array
 *
 * Return: returns a pointer to a 2 dimensional array of integers (grid)
 */

int **alloc_grid(int width, int height)

{
	int **grid;
	int r, c;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);

	for (r = 0; r < height; r++)
	{
		grid[r] = malloc(width * sizeof(int));

		if (grid[r] == NULL)
		{
			for (c = 0; c < r; c++)
			{
				free(grid[c]);
			}
			free(grid);
			return (NULL);
		}
		for (c = 0; c < width; c++)
			grid[r][c] = 0;
	}
	return (grid);
}
