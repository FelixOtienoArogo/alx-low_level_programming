#include <stdio.h>
#include<stdlib.h>
#include<string.h>

/**
 * free_grid - frees a 2 dimensional grid previously created
 * @grid: the grid
 * @height: the height of the array
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
{
free(grid[i]);
}

free (grid);
}
