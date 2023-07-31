#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _memset -  set a block of memory to a specified value.
 * @s: Pointer to the starting address of the memory block to be filled.
 * @b: The value to be set (converted to unsigned char)
 * @n: size of s.
 * Return: Nothing.
 */

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (0);
}
