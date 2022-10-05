#include "main.h"

/**
 * free_grid - function that fress a 2D grid
 * @height: height of the array
 * @grid: grid of the array
 * Return: returns void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
				free(grid);
				}
