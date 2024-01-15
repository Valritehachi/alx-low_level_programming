#include "main.h"

/**
* _strcat - checks uppercase letters
* @dest: number to check
* @src: number to check
* Return: void.
*/

char *_strcat(char *dest, char *src)
{
int a;
int b;

a = 0;
while (dest[a] != '\0')
{
a++;
}
b = 0;
while (src[b] != '\0')
{
a++;
b++;
}

dest[a] = '\0';
return (dest);
}
