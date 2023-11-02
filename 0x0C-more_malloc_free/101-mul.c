#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * is_digit - checks string
 * @s: string
 * Return: 0
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
 * _strlen - returns the legth
 * @s: string
 * Return: 0
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
 * main - main file
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
char *s1, *s2;
int l1, l2, l, i, carry, digit1, digit2, *result, a = 0;

s1 = argv[1], s2 = argv[2];
if (argc != 3 || !is_digit(s1) || !is_digit(s2))
errors();
l1 = _strlen(s1);
l2 = _strlen(s2);
l = l1 + l2 + 1;
result = malloc(sizeof(int) * l);
if (!result)
return (1);
for (i = 0; i <= l1 + l2; i++)
result[i] = 0;
for (l1 = l1 - 1; l1 >= 0; l1--)
{
digit1 = s1[len1] - '0';
carry = 0;
for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
{
digit2 = s2[len2] - '0';
carry += result[l1 + l2 + 1] + (digit1 *digit2);
result[l1 + l2 + 1] = carry % 10;
carry /= 10;
}
if (carry > 0)
result[l1 + l2 + 1] += carry;
}
for (i = 0; i < l - 1; i++)
{
if (result[i])
a = 1;
if (a)
_putchar(result[i] + '0');
}
if (!a)
_putchar('0');
_putchar('\n');
free(result);
return (0);
}
