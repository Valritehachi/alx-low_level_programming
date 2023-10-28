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
	if (argc < 3)
	{
		puts("Error");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
