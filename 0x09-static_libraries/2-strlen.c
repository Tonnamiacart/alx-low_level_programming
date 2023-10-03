#include "main.h"
#include <stdio.h>

/**
 * _strlen - The string lenght
 * @s: This counts the length
 * Return: string lenght
 */

int _strlen(char *s)

{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;

	return (count);
}
