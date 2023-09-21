#include <stdio.h>
#include "main.h"

/**
 * *cap_string - Using the string
 * @s: Pointer for the parameter here
 * Return: s
 */

char *cap_string(char *s)
{
	int a;
	int b;

	char magnif[] = " \t\n,;.!?\"(){}";

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[0] >= 97 && s[0] <= 122)
			s[0] = s[0] - 32;
		for (b = 0; magnif[b] != '\0'; b++)
			if (s[a] == magnif[b] && s[a + 1] >= 97 && s[a + 1] <= 122)
				s[a + 1] = s[a + 1] - 32;
	}
	return (s);
}
