#include "main.h"

/**
 * _isdigit - This is used to check if it has digit
 *
 * @c: The paramter in place
 *
 * Return: 0 if otherwise and 1 if c is a digit;
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
