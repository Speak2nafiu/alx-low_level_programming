#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - check the code
 *@s1: string input
 *@s2: string input
 * Return: Always 0.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int p;
	int len;
	void *dest;

	if (n >= strlen(s2))
	{
		p = strlen(s2);
	}
	else
	{
		p = n;
	}

	len = strlen(s1) + p + 1;

	dest = malloc(len);
	dest[len] = '/0';

	if (dest == NULL)
	{
		return (NULL);
	}

	strcpy(dest, s1);
	strncat(dest, s2, p);
	return (dest);
}
