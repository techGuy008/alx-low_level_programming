#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
int **arr;
int i, j;

if (width <= 0 || height <= 0)
return (NULL);

arr = malloc(sizeof(int *) * height);

if (arr == NULL)
return (NULL);

for (i = 0; i < height; i++)
{
arr[i] = malloc(sizeof(int) * width);
if (arr[i] == NULL)
{
for (; i >= 0; i--)
free(arr[i]);

free(arr);
return (NULL);
}
}

for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
arr[i][j] = 0;
}
return (arr);
}
