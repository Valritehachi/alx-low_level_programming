#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	char op;
	int (*op_func)(int a, int b);

	if (argc != 4)
	{
		puts("Error\n");
		return (98);
	}
	num1 = atoi(argv[1]);
	op = argv[2][0];
	num2 = atoi(argv[3]);
	if ((op == '/' || op == '%') && argv[2][1] == 0 && num2 == 0)
	{
		puts("Error\n");
		return (100);
	}
	op_func = get_op_func(argv[2]);
	if (op_func == NULL)
	{
		puts("Error\n");
		return (99);
	}
	printf("%d\n", op_func(num1, num2));
	return (0);
}
