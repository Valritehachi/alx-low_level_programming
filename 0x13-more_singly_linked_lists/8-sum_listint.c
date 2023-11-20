#include "lists.h"

/**
 * sum_listint - Returns sum
 * @head: Pointer
 * Return: Sum.
 */

int sum_listint(listint_t *head)
{
int sum = 0;

while (head != NULL)
{

sum += head->n;
head = head->next;
}

return (sum);

}
