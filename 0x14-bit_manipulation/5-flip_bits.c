#include "main.h"

/**
 * flip_bits - returns the number of bits to be fliped to get from one
 * number to another.
 * @n: first number
 * @m: number to get.
 * Return: number
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m, p = n | m;
	unsigned long int check = 1, no = 0;

	while (p)
	{
		if (diff & check)
			no++;

		check = check << 1;
		p = p >> 1;
	}

	return (no);
}
