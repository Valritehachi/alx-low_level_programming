#include "main.h"

/**
 *_strcat - Concatenates two strings with a line break.
 *@dest: The destination string.
 *@src: The source string to be appended to dest.
 *Main - Entry point of the program.
 *
 *Return: to destination string.
*/
char *_strcat(char *dest, char *src)
{
int length_of_string, z;

length_of_string = 0;
while (dest[length_of_string] !=  '\0')
{
length_of_string++;
}
for  (z = 0; src[z] != '\0'; z++, length_of_string++)
{
dest[length_of_string] = src[z];
}
dest[length_of_string] = '\0';
return (dest);
}
