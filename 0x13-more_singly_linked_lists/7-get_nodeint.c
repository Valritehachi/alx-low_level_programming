#include "lists.h"

/**
 * get_nodeint_at_index - Returns nth node
 * @head: Pointer
 * @index: Index of node
 * Return: head.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int a;

for (a = 0; a < index && head != NULL; a++)
{
head = head->next;
}

return (head);

}
