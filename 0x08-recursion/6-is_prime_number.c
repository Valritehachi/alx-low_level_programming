#include "main.h"

/**
 * prime_x - Checks if number is prime.
 * @x: The number to check
 * @y: The number being checked.
 * Return: 1 if x is prime.
 */

int prime_x(int x, int y)
{
if (x <= 1 || (x != y && x % y == 0))
{
return (0);
}
else if (x == y)
{
return (1);
}
return (prime_x(x, y + 1));
}

/**
 * is_prime_number - Checks if number is a prime.
 * @n: The number to check.
 * Return: 1 if n is prime.
 */

int is_prime_number(int n)
{
return (prime_x(n, 2));
}
