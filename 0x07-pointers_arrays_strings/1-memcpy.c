#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _memcpy - copies a block of memory
 * @dest: the address of memory to be copies to
 * @src: the source memory to be copied
 * @n: the size of the memory
 *
 * Return: Nothing.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
