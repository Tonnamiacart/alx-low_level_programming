#include "lists.h"

/**
 * sum_listint - function that sums linked list
 * @head: pointer
 * Return: 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
