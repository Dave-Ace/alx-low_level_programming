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
int h = 0;
int w;
int *ar;
if (width <= 0 || height <= 0)
return (NULL);
ar = malloc((sizeof(width) * width) + (sizeof(height) * height));
if (ar == 0)
{
return (NULL);
}
else
{
while (h <= height)
{
for (w = 0; w <= width; w++)
{
ar[h][w] = 0;
}
h++;
}
}
return (ar);
}
