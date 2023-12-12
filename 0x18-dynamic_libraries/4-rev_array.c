#include <stdio.h>
#include <time.h>
#include <string.h>
#include "main.h"
/**
 * reverse_array - This is just to reverse parameters
 * @a: pointer of int parameter
 * @n: secont pointer
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int hay = 0;
	int ball = n - 1;

	while (hay < ball)
	{
		int tmp = a[hay];

		a[hay] = a[ball];
		a[ball] = tmp;

		hay++;
		ball--;
	}
}
