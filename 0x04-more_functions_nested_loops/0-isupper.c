#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks the codefor upper case
 *
 * int c - Ascii value of character
 * Return: Always 0.
*/


int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}

