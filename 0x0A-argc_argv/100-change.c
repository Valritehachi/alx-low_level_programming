#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* main - main function
* @argc: argument count
* @argv: arguments
* Return: dest.
*/
int main(int argc, char *argv[])
{
	int cents, i;
	int places[5] = {25, 10, 5, 2, 1};
	int coins;

	if (argc != 2)
	{
		puts("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		puts("0\n");
		return (0);
	}
	coins = 0;
	for (i = 0; i < 5; i++)
	{
		coins += cents / places[i];
		cents = cents % places[i];
	}
	printf("%d\n", coins);
	return (0);
}
