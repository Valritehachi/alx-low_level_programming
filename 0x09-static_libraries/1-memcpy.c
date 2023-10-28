/**
 * _memcpy - fills memory with constant byte.
 * @dest: the address of memory to print
 * @src: the size of the memory to print
 * @n: number of bytes to fill
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}

return (dest);
}