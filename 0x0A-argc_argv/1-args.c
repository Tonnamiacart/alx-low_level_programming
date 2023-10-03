#include <stdio.h>

/**
 * main - this function prints number of arguments.
 * @argc: number of arguments passed.
 * @argv: string of arguments
 * Return: 0;
 */

int main(int argc, char *argv[])
{
	int i = 0;

	printf("%d\n", argc - 1);
	if (i > argc)
	{
		printf("%s", argv[i]);
	}
	return (0);
}
