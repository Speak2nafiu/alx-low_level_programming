#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


/**
 *listint_len - main func
 *@lintint_t : struct list
 *h: pointer
 * Return: counter
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
	
		h = h->next;
		++count;
	}
	return (count);
}
