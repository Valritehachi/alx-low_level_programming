#include "main.h"

/**
 * factorial - uses recursion to return the factorial of a number
 * @n: the number to be factored.
 * Return: The factorial of n
 */

int factorial(int n)
{
if (n == 0)
{
return (1);
}
else if (n < 0)
{
return (-1);
}
return (n * factorial(n - 1));
}
