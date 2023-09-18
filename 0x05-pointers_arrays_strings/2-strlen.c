#include <stdio.h>
#include "main.h"

/**
 * _strlen - This helps with the string lenght
 * @s: This counts the length
 * return: count
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;

	return (count);
}
