#include "main.h"

/**
 * print_square - This prints # in multiple folds
 * @n: parameter
 * return: void
 */
void print_square(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int o, p;

		for (o = 0; o < n; o++)
		{
			for (p = 0; p < n; p++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
