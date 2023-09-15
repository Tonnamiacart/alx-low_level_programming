#include "main.h"

/**
 * print_diagonal - Thia prints the diagonal in our code
 * @a: number of times the charater will be printed
 * return: void
 */
void print_diagonal(int a)
{
	if (a <= 0)
	{
		_putchar('\a');
	}
	else
	{
		int gap, b;

		for (gap = 0; gap < a; gap++)
		{
			for (b = 0; b < gap; b++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
