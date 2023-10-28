#include "main.h"

/**
* main - main function
* @argc: argument count
* @argv: arguments
* Return: 0.
*/

int main(int argc, char *argv[])
{
int num, cent, i;

int coins[] = {25, 10, 5, 2, 1};

if (argc != 2)
{
printf("Error\n");
return (1);
}
num = atoi(argv[1]);
cent = 0;
if (num < 0)
{
printf("0\n");
return (0);
}
for (i = 0; i < 5 && num >= 0; i++)
{
while (num >= coins[i])
{
cent++;
num -= coins[i];
}
}
printf("%d\n", cent);
return (0);
}
