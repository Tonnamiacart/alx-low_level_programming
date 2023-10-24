#include "lists.h"

/**
 * free_listint2 - function frees a list.
 * @head: pointer
 */

void free_listint2(listint_t **head)
{
listint_t *c_node;
listint_t *n_node;

if (head == NULL)
	return;

c_node = *head;

while (c_node != NULL)
{
	n_node = c_node->next;
	free(c_node);
	c_node = n_node;
}

*head = NULL;
}
