#include "main.h"

/**
 * swap_int - This is to help with the integer swap
 * @a: Parameter
 * @b: second parameter
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
