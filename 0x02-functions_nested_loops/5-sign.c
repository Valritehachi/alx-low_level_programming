#include "main.h"

/**
 *print_sign - Checks for the alphabetic characters
 *@n: This is the character to be checked
 *Return: 1 for alphabetic character or 0 for something else
 */

int print_sign(int n)

{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}
