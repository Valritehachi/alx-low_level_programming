#include "ctype.h"

/**
 *_isalpha - Checks for the alphabetic characters
 *@c: This is the character to be checked
 *Return: 1 for alphabetic character or 0 for something else
 */

int _isalpha(int c)
{
if (isalpha(c))
{
return (1);
}
else
{
return (0);
}
}
