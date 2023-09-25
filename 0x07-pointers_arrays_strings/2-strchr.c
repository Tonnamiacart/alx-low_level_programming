#include <stdio.h>

/**
 * _strchr - The entry point function
 * @s: First input
 * @c: Secong input
 * Return: 0;
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
