#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *print_listint- print elements in a list
 *
 *@h : pointer
 *
 * Return: count
 *
 *
 */



size_t print_listint(const listint_t *h)
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


