/**
 * _strchr - fills memory with constant byte.
 * @c: the address of memory to print
 * @s: the size of the memory to print
 * Return: pointer to first occurence.
 */

char *_strchr(char *s, char c)
{
int index;

for (index = 0; s[index] >= '\0'; index++)
{
if (s[index] == c)
return (s + index);
}
return ('\0');
}
