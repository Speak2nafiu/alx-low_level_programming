#include <stdio.h>

/**
 *main - prints the number of argume
 *
 *@argc: arg counter
 *@argv: arg vector
 *Return: always 0
 */

int main(int argc, char *argv[])
{
	if (argv[0] == NULL)
	{
		argc = 1;

	}
	printf("%d\n", argc - 1 );
	return (0);
}
