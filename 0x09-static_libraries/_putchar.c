#include <unistd.h>

/**
 * _putchar - prints buffer in hexa
 * @c: the address of memory to print
 *
 * Return: Nothing.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
