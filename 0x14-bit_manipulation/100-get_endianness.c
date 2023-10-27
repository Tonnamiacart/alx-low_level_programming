#include "main.h"

/**
 * get_endianness - function checks endianness
 * Return: 0 for big, or 1 for little
 */
int get_endianness(void)
{
	int no  = 1;

	if (*(char *)&no == 1)
		return (1);
	else
		return (0);
}
