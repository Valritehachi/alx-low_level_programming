#include "main.h"
#include <unistd.h>

/**
*print_rev - prints a string in reverse
*@s: - the string pointer
*Return: 0
*/

void print_rev(char *s)
{
int start = 0;

while (s[start])
start++;

while (start--)
write(1, &s[start], 1);

write(1, "\n", 1);
}
