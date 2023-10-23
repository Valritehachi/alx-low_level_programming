#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - prints the chessboard
 *
 * @a: The 2D array representing the chessboard
 */

void print_chessboard(char (*a)[8])
{
int x, y;
for (x = 0; x < 8; x++)
{
for (y = 0; y < 8; y++)
{
putchar(a[x][y]);
}
putchar('\n');
}
}
