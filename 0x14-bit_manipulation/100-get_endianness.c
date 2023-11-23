#include "main.h"

/**
 * get_endianness - Checks endianness
 * Return: 0.
 */

int get_endianness(void)
{
int y;
char *a;

y = 1;
a = (char *)&y;

return (*a);
}
