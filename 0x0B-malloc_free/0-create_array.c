#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create an array of integers
 * @c: characters to biuld
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *p;

	if (size == 0)
	{
		return (0);
	}

	p =(char *)malloc(size * sizeof(char));

	while (i < size)
	{
		p[i] = c;
		++i;
	}

	return (p);
}
