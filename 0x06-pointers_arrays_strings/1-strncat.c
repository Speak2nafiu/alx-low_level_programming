#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strncat - concanate two string
 * @s1 : string 1
 * @s2 : string 2
 * @n :	 size of string to concatanate
 *
 * Return: output string  1.
 */

char *_strncat(char *s1, char *s2, int n)
{
	strncat(s1, s2, n);

	return (s1);
}
