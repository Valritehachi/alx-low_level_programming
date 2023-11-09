#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all - sum of all
* @n: paramters passed to function.
* @...: paramters to sum.
* Return: 0
*/
int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int y, sum = 0;

va_start(ap, n);

for (y = 0; y < n; y++)
sum += va_arg(ap, int);
va_end(ap);

return (sum);
}
