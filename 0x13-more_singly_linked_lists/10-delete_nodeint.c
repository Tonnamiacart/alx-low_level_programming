#include "lists.h"

/**
 * delete_nodeint_at_index - function deletes the node at index of a linkedlist
 * @head: pointer to the head of the list.
 * @index: index
 * Return: 1 success, -1 if failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *c, *d;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	c = *head;

	if (index == 0)
	{
		*head = c->next;
		free(c);
	}
	if (index > 0)
	{
		for (i = 0; i < index - 1; i++)
		{
			if (c->next == NULL)
				return (-1);

			c = c->next;
		}
		d = c;
		c = c->next;
		d->next = c->next;
		free(c);
	}
	return (1);
}
