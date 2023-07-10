#include "main.h"

/**
 * free_grid - fghj
 * @grid: ghj
 * @height: ghjkl
 * Return: ghj
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(grid[i]);
	free(grid);
}
