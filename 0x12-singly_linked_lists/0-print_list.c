#include "lists.h"

/**
 * print_list - function that prints a single linked list
 * @h: pointer to the list to print
 * Return: 0 success
*/
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%i] %s\n", h->len, h->str);

		h = h->next;
		n += 1;
	}

	return (n);
}
