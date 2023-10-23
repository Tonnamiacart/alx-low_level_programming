#include "lists.h"

/**
 * add_nodeint_end - function add node at the end
 * @head: pointer to head
 * @n: carrying a constant int
 * Return: Always 0.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *a;
	listint_t *b;

	a = malloc(sizeof(listint_t));
	if (!a)
		return (NULL);

	b = *head;
	a->n = n;
	a->next = NULL;

	if (*head == NULL)
	{
		*head = a;
		return (a);
	}

	while (b->next)
		b = b->next;

	b->next = a;
	return (a);
}
