#include <string.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * *_strncat - This helps concatenate the n byte in src to dest
 * @dest: get content of src
 * @src: Get content to dest
 * @n: the n byte
 * Return: result
 */

char *_strncat(char *dest, char *src, int n)
{
	char *result = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
	return (result);
}
