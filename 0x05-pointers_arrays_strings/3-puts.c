#include "main.h"

/**
 * _puts - This is function of string to be printed
 * @str: The printed string
 * Return: void
 */
void _puts(char *str)

{
	int i;

	for (i = 0; str[i] != '\0'; i++)

	_putchar(str[i]);

	_putchar('\n');
}

