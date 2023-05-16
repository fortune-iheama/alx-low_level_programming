#include "main.h"
#include <stdlib.h>

/**
 * free_grid-main function
 * @grid: 2 dimensional array
 * @height: height of @grid
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int g;

	for (g = 0; g < height; g++)
		free(grid[g]);

	free(grid);
}
