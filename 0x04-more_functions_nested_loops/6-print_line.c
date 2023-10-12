#include "main.h"

/**
 * print_line - Print a straight line in the terminal.
 * @n: The number of times the character '_' should be printed.
 */

void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int y;

for (y = 0; y < n; y++)
{
_putchar('_');
}

_putchar('\n');
}
}
