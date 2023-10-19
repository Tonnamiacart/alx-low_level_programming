#include "lists.h"

/**
 * list_len - function that returns the lenght of the linked list
 * @h: Linked list to check
 * Return: 0 success
*/
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		h = h->next;
		n += 1;
	}

	return (n);
}
