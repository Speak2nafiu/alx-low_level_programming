#include <math.h>
#include <stdio.h>
#include "main.h"

/**
 *_sqrt_recursion - prints perfect square
 *@n: number 
 *
 */
int _sqrt_recursion(int n)
{
	int y = sqrt (n);
	int z;

	if (y * y == n)
	{
	 	z = y;	 
	}

	else 
	{
		z = -1;
	}

	return (z);
}
