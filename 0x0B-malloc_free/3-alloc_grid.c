#include "main.h"

/**
 * alloc_grid - creates a 2D array
 * @width: sets the inner array
 * @height: sets the outer array
 * Return: value
 */

int **alloc_grid(int width, int height)
{
	int **ptr;
	int h, w;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = malloc(sizeof(int *) * height);

	if (ptr == NULL)
		return (NULL);

	for(h = 0; h < height; h++)
	{
		ptr[h] = malloc(sizeof(int) * width);

		if (ptr[h] == NULL)
		{
			for (; h >= 0; h--)
				free(ptr[h]);

			free(ptr);
			return (NULL);
		}
	}

	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
		{
			ptr[h][w] = 0;
		}
	}

	return (ptr);
}
