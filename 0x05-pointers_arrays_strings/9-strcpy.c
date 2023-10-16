#include "main.h"

/**
*_strcpy - ,copies the string the src points to
*@src: - string type
*@dest: - string type
*Description: copy string pointed to by pointer
*Return: pointer to 'dest'
*/

char *_strcpy(char *dest, char *src)

{
int z = -1;

do {
z++;
dest[z] = src[z];
} while (src[z] != '\0');

return (dest);
}
