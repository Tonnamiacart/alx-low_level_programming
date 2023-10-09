#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - this function concatenates s2 and s1 together
 * @s1: first string
 * @s2: second string
 * @n: number of bytes from second string
 * Return: 0 if failed
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i=0, j;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
	{
		i++;
	}

	concat = malloc((i * sizeof(char)) + n + 1);
	if (concat == NULL)
		return (0);

	for (j = 0; j < i + n; j++)
	{
		if (!(j >= i))
			concat[j] = s1[j];
		else
			concat[j] = s2[j - i];
	}
	concat[j] = '\0';
	return (concat);
}
