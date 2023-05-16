#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - main function
 * @width: the width of the grid
 * @height: the height of the grid
 * Return: NULL if width or height <=0 
 */

int **alloc_grid(int width, int height)
{
	int *n_arr;
	int ht, wt;

	if (width <= 0 || height <= 0)
		return (NULL);

	n_arr = malloc(height * sizeof(int *));

	if (n_arr == NULL)
		return (NULL);

	for (ht = 0; ht < height; ht++)
	{
		n_arr[hi] = malloc(width * sizeof(int));

		if (n_arr[ht] == NULL)
		{
			for (; ht >= 0; ht--)
				free(n_arr[ht]);

			free(n_arr);
			return (NULL);
		}
	}

	for (ht = 0; ht < height; hi++)
	{
		for (wt = 0; wt < width; wt++)
			n_arr[hi][wt] = 0;
	}
	return (n_arr);
}
