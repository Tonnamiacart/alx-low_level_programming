#include "lists.h"

/**
 * add_nodeint - function adds node
 * @head: pointer to head
 * @n: carrying a constant integer
 * Return: 0
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *a;

	a = malloc(sizeof(listint_t));
	if (!a)
		return (NULL);

	a->n = n;
	a->next = *head;
	*head = a;

	return (a);
}
