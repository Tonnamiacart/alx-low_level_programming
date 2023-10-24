#include "lists.h"

/**
 * insert_nodeint_at_index - funtion inserts new node at a given position
 * @head: pointer to first node in list.
 * @idx: index that should be added.
 * @n: data to be added
 * Return: pointer or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *a, *b;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	b = malloc(sizeof(listint_t));
	if (b == NULL)
		return (NULL);

	b->n = n;
	a = *head;

	if (idx == 0)
	{
		b->next = a;
		*head = b;
		return (b);
	}

	for (i = 0; i < idx - 1; i++)
	{
		if (a == NULL)
			return (NULL);
		a = a->next;
	}

	b->next = a->next;
	a->next = b;

	return (b);
}
