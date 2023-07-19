#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
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
