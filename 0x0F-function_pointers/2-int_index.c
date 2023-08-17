#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - check if a number is equal to 98
 * @size: the integer to check
 * @array: the array of letters
 * @cmp: compare func
 * Return: -1 if false, something else otherwise.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == 0)
	{
		return (-1);
	}

	i = 0;

	while (i <= size)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
		++i;
	}

	return (-1);
}

