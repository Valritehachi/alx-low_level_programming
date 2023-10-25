#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 * @s: The string to calculate its length.
 * Return: The length of the string.
 */

int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
else
return (1 + _strlen_recursion(s + 1));
}

/**
 * compare_string - Compares characters in a string
 * @s: The string to check
 * @left: The index of the left character
 * @right: The index of the right character
 * Return: 1 if the string is a palindrome, 0 if not.
 */

int compare_string(char *s, int left, int right)
{
if (*(s + left) == *(s + right))
{
if (left == right || left == right + 1)
return (1);
return (0 + compare_string(s, left + 1, right - 1));
}
return (0);
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check
 * Return: 1 if the string is a palindrome, 0 if not.
 */

int is_palindrome(char *s)
{
if (*s == '\0')
return (1);
return (compare_string(s, 0, _strlen_recursion(s) - 1));
}
