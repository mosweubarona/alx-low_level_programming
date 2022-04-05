#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free created grid memory
 * @grid: grid to free
 * @height: int
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(grid[i]);
	free(grid);
}
