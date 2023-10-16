#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates a random valid password
 *
 * Description: This program generates a random valid password
 * of a specified length from a defined character set.
 *
 * Return: 0 upon successful execution
 */
int main(void)
{

srand(time(NULL));

int password_length = 10;

char charset[] = "abcdefghijklmnopqrstuvwxyz"
"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
"0123456789";

printf("Random Password: ");

for (int i = 0; i < password_length; i++)
{

int index = rand() % (sizeof(charset) - 1);
putchar(charset[index]);
}

putchar('\n');

return (0);
}

