#include "main.h"
#include <stdlib.h>

/**
 * _calloc - this function allocates memory for an array using malloc
 * @nmemb: number of elements in array.
 * @size: number of elements in each element of the array.
 * Return: NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *elem;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (0);

	elem = malloc(nmemb * size);
	if (elem == NULL)
		return (0);

	for (i = 0; i < nmemb * size; i++)
	{
		*(elem + i) = 0;
	}
	return (elem);
}
