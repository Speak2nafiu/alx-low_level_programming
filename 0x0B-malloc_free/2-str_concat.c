#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */

char *str_concat(char *s1, char *s2)
{
	char *conc;
	size_t len1;
	size_t len2;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);


	conc = (char *)malloc(len1 + len2 + 1);
	
	if (conc != NULL)
	{

		strcpy(conc , s1);
		strcat(conc , s2);
	}

	return (conc);
}
