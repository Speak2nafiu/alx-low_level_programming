#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *_print_rev_recursion - print the reverse of a string
 *@lenght: size of string
 *@s: string to be reversed
 *Return 0
 */

void _print_rev_recursion(char *s)
{
	int lenght = strlen(s);

	if (lenght >= 0)
	{
		putchar(s[lenght]);
		s = s[--lenght];
		_print_rev_recursion(s);
	}

	return (0);
}
