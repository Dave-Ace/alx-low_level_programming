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
ar = malloc((sizeof(width) * width) + (sizeof(height) * height));
if (ar == 0)
{
return (NULL);
}
else
{
for (h = 0; h <= height; h++)
{
for (w = 0; w <= width; w++)
{
ar[h][w] = 0;
}
}
}
return (ar);
}
