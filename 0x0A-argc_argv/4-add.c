#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - Check a string's contents
 * @str: The string to check
 *
 * Return: 1 if string has numeric characters, 0 otherwise.
 */

int check_num(char *str)
{
unsigned int count;

count = 0;
while (count < strlen(str))
{
if (!isdigit(str[count]))
{
return (0);
}
count++;
}
return (1);
}

/**
 * main - Entry point
 * @argc: command-line arguments
 * @argv: array of command-line argument.
 * Return: 0 on success, 1 on error
 */

int main(int argc, char *argv[])
{

int str_to_int;
int count;
int sum = 0;

count = 1;
while (count < argc)
{
if (check_num(argv[count]))
{
str_to_int = atoi(argv[count]);

sum += str_to_int;
}
else
{
printf("Error\n");
return (1);
}
count++;
}
printf("%d\n", sum);
return (0);
}
