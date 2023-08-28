#include "lists.h"

/**
 * free_listint - It frees a linked list
 * @head: listint_t is the list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *current = head;

	while (current != NULL)
	{
		listint_t *temp = current;

		current = current->next;

		free(temp);
	}
}

