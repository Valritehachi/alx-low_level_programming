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
	int sum, num, i;

	if (argc < 2)
	{
		puts("0\n");
		/* return (0); */
	}
	sum = 0;
	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);
		if (num == 0)
		{
			puts("Error\n");
			return (1);
		}
		sum = sum + num;
	}
	printf("%d\n", sum);
	return (0);
}
