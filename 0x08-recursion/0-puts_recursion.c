#include "main.h"

/**
 * _puts - prints a string and a new line
 * @i: string to be printed.
 * @s: The string to be printed.
 * Return: Always 0.
 */
void _puts(char *s, int i)
{
	if (s[i] == 0)
	{
		_putchar('\n');
	}
	else
	{
		_putchar(s[i]);
		_puts(s, i + 1);
	}
}
/**
 * _puts_recursion - prints a string and a new line
 * @s: string to be printed
 */

void _puts_recursion(char *s)
{
	if (!s)
	{
		return;
	}
	_puts(s, 0);
}
