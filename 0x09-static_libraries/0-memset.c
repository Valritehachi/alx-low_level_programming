/**
 * _memset - fills memory with constant byte.
 * @b: the address of memory to print
 * @s: the size of the memory to print
 * @n: number of bytes to fill
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}

return (s);
}

