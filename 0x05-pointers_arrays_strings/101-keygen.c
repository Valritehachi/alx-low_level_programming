#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates a random valid password
 *
 * Description: This program generates a random valid password
 * of a specified length from a defined character set.
 *
 * Return: 0 upon successful execution
*/

int main(void)
{
int sum;
char c;

strand(time(NULL));
sum = 0;
while (sum <= 2645)
{

c = rand() % 128;
sum += c;
putchar(2772 - sum);

return (0);
}
