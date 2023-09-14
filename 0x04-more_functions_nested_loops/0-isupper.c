#include "main.h"

/**
 * _isupper - Using this to print the upper case letter
 *
 * @c: The parameter to be checked
 *
 * Return: 0 for otherwise and 1 for uppercase;
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
