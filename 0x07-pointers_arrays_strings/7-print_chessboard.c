#include "main.h"
/**
 * print_chessboard - function that prints chessboard
 * @a: pointer
 * Return: void
 */
void print_chessboard(char (*a)[8]);
{
int i, j;
for (i = 0; i < 9; i++)
{
for (j = 0; j < 9; j++)
{
_putchar('0', a[i][j]);
if (j == 8)
_putchar('\n');
}
}
}
