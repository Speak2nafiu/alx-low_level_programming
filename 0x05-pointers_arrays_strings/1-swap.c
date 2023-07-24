#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap two intergers
 * @a : interger swap
 * @b : interger swap
 *
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
