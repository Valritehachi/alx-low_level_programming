/**
 * _strspn - gets the length of a substring
 * @s: The string to be searched
 * @accept: The string containing the characters to match
 *
 * Return: The number of bytes in the initial segment.
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int bytes = 0;
int index;

while (*s)
{
for (index = 0; accept[index]; index++)
{
if (*s == accept[index])
{
bytes++;
break;
}
else if (accept[index + 1] == '\0')
return (bytes);
}
s++;
}
return (bytes);
}
