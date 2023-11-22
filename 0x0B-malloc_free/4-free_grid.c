#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees the memory allocated for the grid
 * created by alloc_grid() function
 * @grid: grid to be freed
 * @height: height of grid
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
