#include "lists.h"

/**
 * free_listint - function free list
 * @head: pointer
 * Return: 0
 */
void free_listint(listint_t *head)
{
	listint_t *b;

	while (head)
	{
		b = head->next;
		free(head);
		head = b;
	}
}
