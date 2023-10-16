#include "main.h"

/**
*_strlen - strings length checker
*@s: - the string that gets checked
*Return: string length
*/

int _strlen(char *s)
{

int string_length = 0;
while (s[string_length])
string_length++;
return (string_length);

}
