#include "main.h"
#include <stdlib.h>
/**
* free_grid - frees a 2 dimensional grid
* * @grid: first string
* @height: second string
* * Return: a pointer to the array, or NULL if it fails
**/
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; i < height; a++)
		free(grid[a]);
	free(grid);
}

