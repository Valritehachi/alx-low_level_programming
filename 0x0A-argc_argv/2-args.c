#include <stdio.h>
#include "main.h"
/**
* main - main function
* @argc: argument count
* @argv: arguments
* Return: dest.
*/
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
