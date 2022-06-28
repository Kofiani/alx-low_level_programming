#include "main.h"

/**
 * free_grid - frees allocated memory
 * @grid: pointer to pointer
 * @height: height of array
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
