#include "main.h"
#include <stdlib.h>
/**
* free_grid - frees a 2 dimensional grid
* * @grid: first string
* @height: second string
*/
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
		free(grid[a]);
	free(grid);
}

