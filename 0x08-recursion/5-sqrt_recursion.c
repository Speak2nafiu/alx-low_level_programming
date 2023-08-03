#include <stdio.h>
#include "main.h"
#include <math.h>

/**
 *_sqrt_recursion - prints only perfect square root
 *
 *@n: number to square root
 *Return: always 0.
 */

int _sqrt_recursion(int n)
{
	int i = 1;

	while (i * i < n )
	{
		++i;
	}

	if (i * i > n)
	{
		return (-1);
	}
	return (i);
}
