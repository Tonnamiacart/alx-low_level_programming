#include <stdio.h>
#include <string.h>
#include <time.h>
#include "main.h"
#include <ctype.h>
/**
 * *cap_string - Using the string
 * @str: Pointer for the parameter here
 * Return: str
 */

char *cap_string(char *str)
{
	int capitalizeNext = 1;

	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
				str[i] == ',' || str[i] == ';' || str[i] == '.' ||
				str[i] == '!' || str[i] == '?' || str[i] == '"' ||
				str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			capitalizeNext = 1;
		}
		else if (capitalizeNext)
		{
			str[i] = toupper(str[i]);
			capitalizeNext = 0;
		}
		else
		{
			str[i] = tolower(str[i]);
		}
	}
	return (str);
}
