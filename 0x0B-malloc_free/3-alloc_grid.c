#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - dunction that retursn a 2d array
 * @width: width of array
 * @height: height of array
 * Return: integer
 */
int **alloc_grid(int width, int height)
{
int h, w;
int **ar;
if (width <= 0 || height <= 0)
return (NULL);
ar = malloc(sizeof(int*) * height);
if (ar == 0)
{
free(ar);
return (NULL);
}
for (h = 0; h < height; h++)
{
ar[h] = malloc(width * sizeof(int));
if (ar[h] == NULL)
{
for (h--; h >= 0; h--)
free(ar[h]);
free(ar);
return (NULL);
}
}
for (h = 0; h < height; h++)
for (w = 0; w < width; w++)
ar[h][w] = 0;
return (ar);
}
