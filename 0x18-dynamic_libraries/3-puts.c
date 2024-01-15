#include "main.h"
#include <unistd.h>

/**
*_puts - prints a string
*@str: - the string pointer
*Return: string and a new line
*/

void _puts(char *str)

{
int i = 0;

while (str[i])
{
write(1, &str[i], 1);
i++;
}
write(1, "\n", 1);

}
