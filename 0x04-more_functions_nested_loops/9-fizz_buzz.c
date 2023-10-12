#include "main.h"
#include <stdio.h>

/**
 * main - Print numbers from 1 to 100, replacing multiples of 3 and 5.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int y;

for (y = 1; y <= 100; y++)
{
if (y % 3 == 0 && y % 5 != 0)
{
printf("Fizz ");
}
else if (y % 5 == 0 && y % 3 != 0)
{
printf("Buzz ");
}
else if (y % 3 == 0 && y % 5 == 0)
{
printf("FizzBuzz ");
}
else
{
printf("%d ", y);
}
}
printf("\n");
return (0);
}
