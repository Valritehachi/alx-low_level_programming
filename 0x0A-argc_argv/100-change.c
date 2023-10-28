#include <stdio.h>
#include <stdlib.h>

/**
* main - main function
* @argc: argument count
* @argv: arguments
* Return: 0.
*/

int main(int argc, char *argv)
{
int num, result;
unsigned int j;
char *p

int cents[] = {25, 10, 5, 2, 1};

if (argc != 2)
{
printf("Error\n");
return (1);
}
num = strtol(argv[1], &p, 10);
result = 0;
if (j*p)
{
while (num > 1)
{
for (j = 0; j < sizeof(cents[j]); j++)
{
if (num >= cents[j])
{
result += num /cents[j];
num = num % cents[j];
}
}
}
if ( num == 1)
result++
}
else
{
printf("Error\n");
return (1);
}
printf("%d\n", result);
return (0);
}
