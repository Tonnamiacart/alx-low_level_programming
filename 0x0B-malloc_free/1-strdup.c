#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function returns a pointer
 * @str: string parameter
 * Return: NULL
 */

char *_strdup(char *str)
{
	int i = 0, j;
	char *p;

	if (str == NULL)
	{
		return (0);
	}

	while (str[i] != '\0')
	{
		i++;
	}

	p = malloc((i + 1) * sizeof(char));

	if (p == NULL)
	{
		return (0);
	}
	else
	{
		for (j = 0; j < i; j++)
		{
			*(p + j) = str[j];
		}
		p[j] = '\0';
	}
	return (p);
}
