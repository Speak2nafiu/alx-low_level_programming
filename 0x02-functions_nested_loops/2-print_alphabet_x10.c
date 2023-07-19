#include <stdio.h>

/**
 * print_alphabet_x10 - check the code.
 *
 * Return: Always 0.
 */
int print_alphabet_x10(void)
{
	int x = 0;

	while (x <= 9)
	{
		char letter = 'a';

		while (letter <= 'z')
		{
			putchar(letter);
			++letter;
		}
		++x;
		putchar('\n');
	}
	return (0);
}
