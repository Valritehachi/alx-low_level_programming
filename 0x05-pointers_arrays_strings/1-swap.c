#include "main.h"

/**
*swap_int - takes two intergers and swaps them
*@b: - Pointer to the first integer
*@a: - Pointer to the second integer
*This function takes two integers and swaps their values.
*Return: 0
*/

void swap_int(int *a, int *b)

{
int change;
change = *b;
*b = *a;
*a = change;

}
