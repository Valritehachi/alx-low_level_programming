#include <stdio.h>
#include "main.h"

/**
 * print_buffer - Prints the content of a buffer in a specified format.
 * @b: The buffer to be printed.
 * @size: The number of bytes to print.
 */
void print_buffer(char *b, int size)
{
if (size <= 0)
{
printf("\n");
return;
}

for (int i = 0; i < size; i += 10)
{
printf("%08x: ", i);

for (int j = i; j < i + 10; j++)
{
if (j < size)
printf("%02x%s", (unsigned char)b[j], (j % 2 == 1) ? " " : "");
else
printf("  ");

if (j == i + 9)
printf(" ");
}

for (int j = i; j < i + 10; j++)
{
if (j < size)
{
if (b[j] >= 32 && b[j] <= 126)
printf("%c", b[j]);
else
printf(".");
}
else
printf(" ");
}

printf("\n");
}
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */

int main(void)
{
char buffer[] = "A sample buffer to test the print_buffer function.12345";
int size = sizeof(buffer);

print_buffer(buffer, size);

return (0);
}
