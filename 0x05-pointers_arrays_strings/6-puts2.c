#include "main.h"
#include <stdio.h>

/**
*puts2 - Prints every other character of a string then a new line
*@str: - the string pointer
*Return: 0
*/

void puts2(char *str)
{
int z = 0;

while (str[z] != '\0')
{
if (z % 2 == 0)
{
putchar(str[z]);
}
z++;
}
putchar('\n');

}
