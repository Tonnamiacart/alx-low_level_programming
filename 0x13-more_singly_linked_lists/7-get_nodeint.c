#include "lists.h"

/**
 * get_nodeint_at_index - funtion get the nth node of a linked list
 * @head: pointer head
 * @index: index
 * Return: return null or pointer
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *a = head, *b;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	for (i = 0; i < index; i++)
	{
		if (a->next == NULL)
			return (NULL);
		b = a->next;
		a = b;
	}
	return (a);
}
