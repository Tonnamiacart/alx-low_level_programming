#include "main.h"

/**
 * leet - This is to encode
 * @a: Pointer to our parameter
 * Return: a
 */

char *leet(char *a)
{
	int i;
	int j;
	char l[] = "ol_ea__t";

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; l[j] != '\0'; j++)
		{
			if (a[i] == l[j] || a[i] == (l[j] - 32))
			{
				a[i] = j + '0';
			}
		}
	}

	return (a);
}
