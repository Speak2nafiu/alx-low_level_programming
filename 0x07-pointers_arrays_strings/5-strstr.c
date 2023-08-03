#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strstr - check the code
 *@haystack: A pointer to the null-terminated strin )
 *@needle: second dtring
 * Return: Always 0.
 */

char *_strstr(char *haystack, char *needle)
{
	char *result = strstr(haystack, needle);

	return (result);
}
