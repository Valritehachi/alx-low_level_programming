#include "main.h"

/**
 * flip_bits - Counts
 * @n: 1st number.
 * @m: 2nd number.
 * Return: bits.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int y, countbit = 0;
unsigned long int current;
unsigned long int exclusive = n ^ m;

for (y = 63; y >= 0; y--)
{
current = exclusive >> y;
if (current & 1)
countbit++;
}

return (countbit);
}
