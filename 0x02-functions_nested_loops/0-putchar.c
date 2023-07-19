#include <stdio.h>
/**
 * main - prints _putchar
 * Return: Always 0
 */

int main(void)
{

	int i;

	char p[] = "_putchar";

	for (i = 0; i < 8; i++)
	{
		putchar(p[i]);
	}

	putchar('\n');

	return (0);


}

