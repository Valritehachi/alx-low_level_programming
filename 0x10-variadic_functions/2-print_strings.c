#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
* print_strings - Prints strings
* @separator: separator
* @...: number of strings
* @n: strings
* Return: 0
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list strings;
char *str;
unsigned int x;

va_start(strings, n);

for (x = 0; x < n; x++)
{
str = va_arg(strings, char *);

if (str == NULL)
printf("(nil)");
else
printf("%s", str);

if (x != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(strings);
}
