#include <stdio.h>
#include <string.h>
#include <time.h>
#include "main.h"

/**
 * string_toupper - This helps to turn from lower to uppercase
 * @cap: pointer to the parameter
 * Return: *cap
 */

char *string_toupper(char *cap)
{
	char *result = cap;

	while (*cap != '\0')
	{
		if (*cap >= 'a' && *cap <= 'z')
		{
			*cap = *cap - ('a' - 'A');
		}
		cap++;
	}
	return (result);
}
