#include "main.h"

/**
 * rot13 - The main function here
 * @abc: Pointer to the parameter
 * Return: origin
 */

char *rot13(char *abc)
{
	char *origin = abc;

	while (*abc != '\0')
	{
		if ((*abc >= 'a' && *abc <= 'z') || (*abc >= 'A' && *abc <= 'Z'))
		{
			char base = (*abc >= 'a' && *abc <= 'z') ? 'a' : 'A';
			*abc = ((*abc - base + 13) % 26) + base;
		}
		abc++;
	}
	return (origin);
}
