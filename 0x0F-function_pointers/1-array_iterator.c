#include "function_pointers.h"

/**
 * array_iterator - this function executes function given as parameter
 * @array: an array 
 * @size: size of array
 * @action: function pointer
 * Return: nil
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
