#include "lists.h"

/**
 * print_listint - function that prints the elements of list
 * @h: Pointer to the head
 * Return: 0
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}

	return (num);
}
