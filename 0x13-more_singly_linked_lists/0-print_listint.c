#include <stdio.h>
#include <stdlib.h>

/**
 *print_listint- print elements in a list
 *struct istint_t: struct defined in list.h
 *@h : pointer
 *
 * Return: count
 *
 *
 */


struct listint_t
{
	int n;
	struct listint_t *next;
};

size_t print_listint(const struct listint_t *h)
{
	size_t count = 0;

	while (h != 0)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);

}


