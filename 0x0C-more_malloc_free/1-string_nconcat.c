#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - this function concatenates s2 and s1 together
 * @s1: first string
 * @s2: second string
 * @n: number of bytes from second string
 * Return: 0 if failed
 */

unsigned int _strlen(char *s)
{
	int i = 0, count = 0;

	for(; s[i] != '\0'; i++)
		count++;

	return(count);
}

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len = 0;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len = _strlen(s1);

	if (n > _strlen(s2) || n == sizeof(s2))
		n == _strlen(s2);
	len = len + n;
	len++;

	concat = malloc(len);
	if (concat == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		concat[i] = s1[i];

	for (j = 0; j < n; j++, i++)
		concat[i] = s2[j];
	concat[i] = '\0';

	return (concat);
