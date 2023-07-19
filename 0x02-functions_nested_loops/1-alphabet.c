#include <stdio.h>

/**
 * print_alphabet - check the code
 *
 * Return: Always 0 success
 */

int  print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		++letter;
	}
	putchar('\n');
	return (0);
}
