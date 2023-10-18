#include "main.h"

/**
 *_strncat - Concatenates two strings.
 *@dest: The destination string.
 *@src: The source string to be appended to dest.
 *@n: bytes to be concatneted
 *Main - Entry point of the program.
 *
 *length_of_string = the length of the destination string
 *z is the counter for the concatnated bytes
 *Return: to destination string.
*/

char *_strncat(char *dest, char *src, int n)
{
int length_of_string, z;

length_of_string = 0;
while (dest[length_of_string] != '\0')
{
length_of_string++;
}
for (z = 0; z < n && src[z] != '\0'; z++, length_of_string++)
{
dest[length_of_string] = src[z];
}
dest[length_of_string] = '\0';
return (dest);

}
