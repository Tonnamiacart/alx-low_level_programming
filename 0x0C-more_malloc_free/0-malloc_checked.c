#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - this function allocates memory using malloc
 * @b: bytes
 * Return: 98 if failed.
 */

void *malloc_checked(unsigned int b)
{
	int *alloc;

	alloc = malloc(b);
	if (alloc == NULL)
	{
		exit(98);
	}

		return (alloc);
}
