#include <stdio.h>
#include "main.h"

/**
 *factorial - find the factorial of nombers
 *@n: number for factorial
 *Return: always 0
 */
int factorial(int n)
{
	int result;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}

	result = n * factorial(n - 1);
	n--;
	return (result);
}
