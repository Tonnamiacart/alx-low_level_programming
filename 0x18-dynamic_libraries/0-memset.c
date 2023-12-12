#include "main.h"
/**
 * _memset - This function will fill a block of memory with a specific value
 * @s: The memory to be filled
 * @b: The desired value
 * @n: The number of bytes to be changed
 *
 * Return: s;
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
