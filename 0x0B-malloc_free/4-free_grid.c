#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid
 * @grid: array
 * @height: height of grid or total number of one-dimensional arrays
 * Return: ends fx.
 */
void free_grid(int **grid, int height)
{
int i;
if (grid == NULL || height <= 0)
{
return;
}
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
