#include "main.h"

/**
 * more_numbers - This will print numbers in multiple folds
 *
 * return: void
 */

void more_numbers(void)
{
	int a, j;

	for (a = 0; a < 10; a++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
				_putchar((j / 10) + '0');
			}
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
