#include "main.h"
#include <limits.h>

/**
 * _atoi - Converts a string to an integer.
 *@s: The string to convert to an integer.
 *INT_MAX: maximum interger
 *INT_MIN: minimum interger
 * Return: The integer value converted from the string.
 */

int _atoi(char *s)
{
int sign = 1;
int result = 0;

while (*s == ' ')
s++;

if (*s == '-')
{
sign = -1;
s++;
}
else if (*s == '+')
{
s++;
}

while (*s >= '0' && *s <= '9')
{
int digit = *s - '0';

if (result > (INT_MAX - digit) / 10)
{
if (sign == 1)
{
return (INT_MAX);
}
else
{
return (INT_MIN);
}
}
result = result * 10 + digit;
s++;
}

return (result *sign);
}
