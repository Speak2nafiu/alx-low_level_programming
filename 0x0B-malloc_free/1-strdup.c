#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup -returns a pointer to a newly allocated space.
 * @str: pointer to memory
 *
 *
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	int len;
	char *dup;


	len = strlen(str) + 1;

	if (str == NULL)
	{
		return (NULL);
	}

	dup = (char *)malloc(len);

	if (dup != NULL)
	{
		strcpy(dup, str);
	}

	else
	{
		return (NULL);
	}

	return (dup);

}