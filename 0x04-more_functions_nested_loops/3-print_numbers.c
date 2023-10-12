#include "main.h"

/**
 * print_numbers - Print the digits 0 through 9.
 *
 * This function prints from 0 to 9, and a newline character.
 *
 * Return: void
 */

void print_numbers(void)
{
char c;

for (c = '0'; c <= '9'; c++)
{
_putchar(c);
}
_putchar('\n');
}

