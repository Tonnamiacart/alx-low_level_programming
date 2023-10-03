#include <stdio.h>
#include <string.h>
#include <time.h>
#include "main.h"

/**
 * *_strncpy - This helps copy the n byte in src to dest
 * @dest: get to copy  content of src
 * @src: Get content to dest
 * @n: the n byte
 * Return: result
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *result = dest;

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (result);
}
