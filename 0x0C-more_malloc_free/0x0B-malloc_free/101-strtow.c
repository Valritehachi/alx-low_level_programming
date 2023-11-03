#include "main.h"
#include <stdlib.h>

/**
 * word_len - Calculate the length of word.
 * @str: The input string.
 * Return: a
 */
int word_len(char *str)
{
int i = 0, a = 0;

while (*(str + i) && *(str + i) != ' ')
{
a++;
i++;
}
return (a);
}

/**
 * count_words - Count the number of words
 * @str: The input string.
 * Return: words
 */
int count_words(char *str)
{
int i = 0, words = 0, a = 0;

while (str[i])
{
a++;
i++;
}
for (i = 0; i < a; i++)
{
if (str[i] != ' ')
{
words++;
i += word_len(str + i);
}
}
return (words);
}

/**
 * strtow - Splits a string
 * @str: The input string.
 * Return: string
 */
char **strtow(char *str)
{
int i = 0, words, w, letters, p;
char **strings;

if (str == NULL || str[0] == '\0')
return (NULL);
words = count_words(str);
if (words == 0)
return (NULL);
strings = (char **)malloc(sizeof(char *) * (words + 1));
if (strings == NULL)
return (NULL);
for (w = 0; w < words; w++)
{
while (str[i] == ' ')
i++;
letters = word_len(str + i);
strings[w] = (char *)malloc(sizeof(char) * (letters + 1));
if (strings[w] == NULL)
{
for (; w >= 0; w--)
free(strings[w]);
free(strings);
return (NULL);
}
for (p = 0; p < letters; p++)
strings[w][p] = str[i++];
strings[w][p] = '\0';
}
strings[w] = NULL;
return (strings);
}
