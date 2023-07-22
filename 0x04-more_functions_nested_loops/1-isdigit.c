#include "main.h"
#include <stdio.h>

/**
 * _isdigit - check the code
 *
 * @c: input ascii values
 *
 * Return: Always 0.
 */


int _isdigit(int c)
{
	if (c <= 57 && c <= 48)
	{
		return (1);
	}

	else
	{
		return (0);
	}

	return (0);
}
