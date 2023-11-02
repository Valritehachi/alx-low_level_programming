#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * is_digit - checks if a string contains only digits
 * @s: string
 * Return: 1 if it contains only digits, 0 otherwise
 */
int is_digit(char *s)
{
int a = 0;

while (s[a])
{
if (s[a] < '0' || s[a] > '9')
return (0);
a++;
}
return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length of the string
 */
int _strlen(char *s)
{
int a = 0;

while (s[a] != '\0')
{
a++;
}
return (a);
}

/**
 * errors - handles errors
 */
void errors(void)
{
printf("Error\n");
exit(98);
}

/**
 * main - main function
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char *argv[])
{
char *s1, *s2;
int l1, l2, l, i, carry, digit1, digit2, *result, a = 0;

if (argc != 3)
errors();

s1 = argv[1];
s2 = argv[2];

if (!is_digit(s1) || !is_digit(s2))
errors();

l1 = _strlen(s1);
l2 = _strlen(s2);
l = l1 + l2;
result = malloc(sizeof(int) * (l + 1));

if (!result)
return (1);

for (i = 0; i <= l; i++)
result[i] = 0;

for (l1 = l1 - 1; l1 >= 0; l1--)
{
digit1 = s1[l1] - '0';
carry = 0;

for (int l2 = l2 - 1; l2 >= 0; l2--)
{
digit2 = s2[l2] - '0';
carry += result[l1 + l2 + 1] + (digit1 * digit2);
result[l1 + l2 + 1] = carry % 10;
carry /= 10;
}

if (carry > 0)
result[l1 + l2 + 1] += carry;
}

for (i = 0; i <= l; i++)
{
if (result[i] != 0 || i == l)
{
a = 1;
_putchar(result[i] + '0');
}
else if (a)
{
_putchar(result[i] + '0');
}
}
if(!a)
_putchar('0');
_putchar('\n');
free(result);

return (0);
}
