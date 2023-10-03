#include <string.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * *_strcmp - This helps concatenate the n byte in src to dest
 * @s1: get to compare s1
 * @s2: parameter s2 to compare
 * Return: result
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
