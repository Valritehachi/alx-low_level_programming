/**
 * _strpbrk - searches a string for a set of bytes
 * @s: The string to be searched
 * @accept: The string containing the bytes to search for
 * Return: A pointer to the byte.
 */

char *_strpbrk(char *s, char *accept)
{
int i;

while (*s)
{
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
return (s);
}
s++;
}
return ('\0');
}
