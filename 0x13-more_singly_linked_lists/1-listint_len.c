#include "lists.h"

/**
 * listint_len - function prints the numbers of element of list
 * @h: pointer
 * Return: 0.
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		h = h->next;
		num++;
	}

	return (num);
}
