#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strspn - check s for lenght
 * @s:	string to search
 * @accept: srting to search for
 * Return: Always 0.
 */

unsigned int _strspn(char *s, char *accept)
{
	size_t result = strspn(s, accept);

	return (result);
}
