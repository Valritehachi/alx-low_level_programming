#include "main.h"

/**
 * sqrt_a - Calculates the square root of a number.
 * @a: The number to calculate square root.
 * @b: guess for the square root.
 * Return: The natural square root of x
 */

int sqrt_a(int a, int b)
{
if (b * b == a)
{
return (b);
}
else if (b * b > a)
{
return (-1);
}
return (sqrt_a(a, b + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root
 * @n: The number to calculate the square root.
 * Return: The natural square root of n
 */

int _sqrt_recursion(int n)
{
return (sqrt_a(n, 0));
}
