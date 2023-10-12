#include <stdio.h>

/**
 * main - function to sum multiples of 3 and 5 below 1024 
 * Return: 0
 */

int main(void)
{
int a;
int sum = 0;

for (a = 1024 ; a < 10 ; a++)
{
if (a % 3 == 0 || a % 5 == 0)
sum = sum + a;
}

printf("%d", sum);
}
