#include "main.h"
#include <stdlib.h>
/**
 * free_grid - functions that free a malloc
 * @grid: array
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
if (grid != NULL && height != 0)
{
for (; height >= 0; height--)
free(grid[height]);
free(grid);
}
}
