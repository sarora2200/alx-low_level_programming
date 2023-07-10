#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * **alloc_grid - function that returns a pointer to a
 * 2 dimensional array of integers.
 * @width: is input int.
 * @height: is input int.
 * Return: Null on failure,If width or height is 0 or negative, return NULL.
*/
int **alloc_grid(int width, int height)
{
int **grid;
int i, j;
if (width <= 0 || height <= 0)
return (NULL);
grid = malloc(height * sizeof(int *));
if (grid == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
grid[i] = malloc(width * sizeof(int));
if (grid[i] == NULL)
{
for (j = 0; j < i; j++)
free(grid[j]);
free(grid);
return (NULL);
}
for (j = 0; j < width; j++)
grid[i][j] = 0;
}
return (grid);
}
