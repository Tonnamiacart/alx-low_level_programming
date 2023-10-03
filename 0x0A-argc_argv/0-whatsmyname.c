#include <stdio.h>

/**
 * main - this function prints the program name then new line
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0;
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
