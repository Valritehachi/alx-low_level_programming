#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - Concatenates two strings
 * @s1: 1st string
 * @s2: 2nd string
 * Return: s
 */

char *str_concat(char *s1, char *s2)
{
char *s;
int w = 0, x = 0, y = 0, z = 0;

if (s1 == NULL)
s1 = " ";

if (s2 == NULL)
s2 = " ";

while (s1[w])
w++;

while (s1[x])
x++;
z = w + x;
s = malloc((sizeof(char) * z) +1);

if (s == NULL)
return (NULL);

x = 0;
while (y < z)
{
if (y <= w)
s[y] = s1[y];

if (y >= w)
{
s[y] = s2[x];
x++;
}
y++;
}
s[y] = '\0';
return (s);
}
