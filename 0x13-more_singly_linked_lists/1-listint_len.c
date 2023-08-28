#include <stdio.h>
#include <stdlib.h>
/**
 *listint_len - main func
 *@lintint_t : struct list
 *h: pointer
 * Return: counter
 *
 */

struct listint_t
{
	int n;
	struct listint_t *next;
};

size_t listint_len(const struct listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
	
		h = h->next;
		++count;
	}
	return (count);
}
