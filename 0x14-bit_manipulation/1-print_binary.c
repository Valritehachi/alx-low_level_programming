#include "main.h"
#include <stdio.h>
/**
 * _pow - Computes power of a number.
 * @base: ...
 * @power: ..
 * Return: num.
 */

unsigned long int _pow(unsigned int base, unsigned int power)
{
unsigned long int num;
unsigned int p;

num = 1;
for (p = 1; p <= power; p++)
num *= base;
return (num);
}

/**
 * print_binary - Prints number in binary
 * @n: The number
 * Return: 0.
 */

void print_binary(unsigned long int n)
{
unsigned long int divisor, check;
char flag;

flag = 0;
divisor = _pow(2, sizeof(unsigned long int) * 8 - 1);

while (divisor != 0)
{
check = n & divisor;
if (check == divisor)
{
flag = 1;
putchar('1');
}
else if (flag == 1 || divisor == 1)
{
putchar('0');
}
divisor >>= 1;
}
}

