#include <string.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * *_strcat - This helps to concatenate the src into dest
 * @dest: It takes the content inside of src with the help of *_strcat
 * @src: Passses its content to dest
 * Return: result
 */

char *_strcat(char *dest, char *src)
{
	char *result = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (result);
}
