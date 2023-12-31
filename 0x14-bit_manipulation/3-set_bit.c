#include "main.h"

/**
 * set_bit - function sets value of a bit to 1 at a given index
 * @n: pointer to integer
 * @index: index of bit to be set.
 * Return: 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int check = 1;

	if (index > 64)
		return (-1);

	check = check << index;
	*n = *n | check;

	return (1);
}
