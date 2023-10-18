#include "main.h"

/**
 *leet - encodes a string into 1337.
 *Letters a and A are replaced by 4.
 *Letters e and E are replaced by 3.
 *Letters o and O are replaced by 0.
 *Letters t and T are replaced by 7.
 *Letters l and L are replaced by 4.
 *@s: pointer to the string.
 *Return: pointer to s.
*/

char *leet(char *s)
{
int string_length = 0;
char leetLetters[] = "aAeEoOtTlL";
char leetNums[] = "4437011";

while (s[string_length] != '\0')
{
int leetCount = 0;

while (leetCount < 10)
{
if (leetLetters[leetCount] == s[string_length])
{
s[string_length] = leetNums[leetCount];
break;
}
leetCount++;
}

string_length++;
}

return (s);
}

int main(void)
{
char s[] = "leet";
char *p;

p = leet(s);
printf("%s\n", p);

return (0);
}
