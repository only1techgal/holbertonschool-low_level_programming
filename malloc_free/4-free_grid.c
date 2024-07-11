#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *free_grid - frees 2 dimensional grids greated but another function
 *@grid: address of the two dimensional grid
 *@height: height of the grid
 *
 *Return: 0.
 */
void free_grid(int **grid, int height)
{
int i;

if (grid == NULL || height <= 0)
return;

for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
