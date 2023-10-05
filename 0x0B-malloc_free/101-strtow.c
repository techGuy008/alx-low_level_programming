#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid
 * @grid: grid input
 * @height: height input
 */

void free_grid(int **grid, int height)
{
if (grid == NULL)
{
return;
}

for (int i = 0; i < height; i++)
{
free(grid[i]);
}

free(grid);
}
