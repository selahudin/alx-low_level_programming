#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid.
 * @grid: it is a grid that will be free.
 * @height: it is height of the grid.
 */

void free_grid(int **grid, int height)
{
	int s = 0;

	while (s < height)
	{
		free(grid[s]);
		s++;
	}
	free(grid);
}
