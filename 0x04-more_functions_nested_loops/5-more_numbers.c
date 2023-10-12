#include "main.h"

/**
 * more_numbers - Print numbers from 0 to 14 in a pattern.
 *
 * This function prints numbers in a pattern, starting from 0 to 4.
 */
void more_numbers(void)
{
int a, d;

for (a = 0; a < 10; a++)
{
for (d = 0; d <= 14; d++)
{
if (d > 9)
_putchar('1');
_putchar(d % 10 + '0');
}
_putchar('\n');
}
}
