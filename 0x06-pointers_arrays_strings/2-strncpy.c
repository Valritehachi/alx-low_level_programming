#include "main.h"

/**
 *_strncpy - compiles a string.
 *@dest: The destination string.
 *@src: The source string to be appended to dest.
 *@n: bytes to be concatneted
 *Main - Entry point of the program.
 *
 *Return: to destination string.
*/

char *_strncpy(char *dest, char *src, int n)
{

int byte_count;

for (byte_count = 0; byte_count < n && src[byte_count] != '\0'; byte_count++)
dest[byte_count] = src[byte_count];

for (; byte_count < n; byte_count++)
dest[byte_count] = '\0';

return (dest);

}
