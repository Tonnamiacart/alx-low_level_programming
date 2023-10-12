#include "3-calc.h"
#include <string.h>

/**
 * main - function starts at main.
 * @argc: number of arguments in array
 * @argv: array of arguments.
 * Return: 0 if successful or 1 if fails.
 */

int main(int argc, char *argv[])
{
	int i, j;

	if (argc < 4 || argc > 4)
	{
		printf("Error\n");
		return (98);
	}

	if ((*argv[2] != '+' && *argv[2] != '-'
	&& *argv[2] != '*' && *argv[2] != '/'
	&& *argv[2] != '%') || (strlen(argv[2]) > 1))
	{
		printf("Error\n");
		return (99);
	}

	if ((*argv[2] == '/' || *argv[2] == '%')
	&& *argv[3] == '0')
	{
		printf("Error\n");
		return (100);
	}

	i = atoi(argv[1]);
	j = atoi(argv[3]);

	(*get_op_func(argv[2]))(i, j);

	return (0);
}
