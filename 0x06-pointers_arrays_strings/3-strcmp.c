#include "main.h"

/**
 *_strcmp - compares a string with another.
 *@s1: points to the first string.
 *@s2: points to the second string.
 *Main - Entry point of the program.
 *Return: < 0 if value of string is less than the other, > 0 if value is
 *greater than another and 0 if he strings are equal.
*/

int _strcmp(char *s1, char *s2)
{
int i = 0;

while (s1[i] == s2[i] && s1[i] != '\0')
{
i++;
}

return (s1[i] - s2[i]);
}
