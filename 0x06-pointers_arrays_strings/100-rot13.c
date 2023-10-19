#include "main.h"
#include <stdio.h>

/**
 * rot13 - check the code
 *@s: input string.
 * Return: Always 0.
 */
char *rot13(char *s)
{
	int string_length, count;
	char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	string_length = 0;
	while (s[string_length] != '\0')
	{
		count = 0;
		while (count < 52)
		{
			if (in[count] == s[string_length])
			{
				s[string_length] = out[count];
			}
			count++;
		}
		string_length++;
	}
	return (s);
}
