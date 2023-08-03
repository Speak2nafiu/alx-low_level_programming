#include <stdio.h>
#include "main.h"
#include <math.h>
/**
 *_pow_recursion - raise to power
 *@x: index
 *@y: power
 *Return: always 0
 */
int _pow_recursion(int x, int y)
{
	int result;

	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	--y;
	result = x * _pow_recursion(x, y);

	return (result);
}
