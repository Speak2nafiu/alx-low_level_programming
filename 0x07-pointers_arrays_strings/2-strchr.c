#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strchr - check for c in s
 * @c: character to search  for
 * @s: string to search
 * Return: Always 0.
 */

char *_strchr(char *s, char c)
{

	char *result = strchr(s, c);

	return (result);
}
