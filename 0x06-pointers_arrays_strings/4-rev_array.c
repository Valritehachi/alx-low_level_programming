#include "main.h"

/**
 *reverse_array - compares a string with another.
 *@a: points to array.
 *@n: number of elements of an array.
 *Main - Entry point of the program.
 *Return: void.
*/

void reverse_array(int *a, int n)
{
int temporary, counter;

n = n -1;
counter = 0;
while (counter <= n)
{
temporary = a[counter];
a[counter++] = a[n];
a[n--] = temporary;
}

}
