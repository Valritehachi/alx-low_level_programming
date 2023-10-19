#include <stdio.h>

/**
 * main - check the code for
 *
 * Return: Always 0.
 */
int main(void)
{
int a[5] = {98, 198, 298, 398, 498};
int *p;
char *n = "some_string";
char *m = "another_string";
char *res = "result_string";

p = a;

printf("a[2] = 98\n");
printf("%s + %s = %s\n", n, m, res);

return (0);
}
