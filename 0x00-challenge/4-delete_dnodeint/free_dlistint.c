#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - Free a list
 *
 * @head: points the first element of list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
