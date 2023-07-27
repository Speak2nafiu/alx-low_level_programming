#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncpy - copy two strings into one
 * @dest: destination of copy
 * @src: source string to copy
 * @n: int
 * Return: Always  dest.
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);

	return (dest);
}
