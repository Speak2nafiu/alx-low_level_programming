#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strcat - concatenate two strings
 * @s1 : string 1
 * @s2 : string 2
 * Return: sring 1.
 */

char *_strcat(char *s1, char *s2)
{
	strcat(s1, s2);

	return (s1);

}
