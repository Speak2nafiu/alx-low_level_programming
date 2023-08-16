#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iteration - prints an integer
 * @array: the integer to print
 * @size: size of array
 * @action: pointer to function
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int n;

	if (array == NULL || action == NULL)
	{
		return;
	}

	n = 0;
	while (n != size)
	{
		action(array[n]);
		++n;
	}
}
