#include "main.h"

/**
 *string_toupper - changes lowercase to uppercase.
 *@a: points to string
 *Main - Entry point of the program.
 *Return: pointer to uppercase string.
*/

char *string_toupper(char *a)
{
int length_of_string;

length_of_string = 0;

while (a[length_of_string] != '\0')
{
if (a[length_of_string] >= 97 && a[length_of_string] <= 122)
{
a[length_of_string] = a[length_of_string] - 32;
}
length_of_string++;
}
return (a);
}
