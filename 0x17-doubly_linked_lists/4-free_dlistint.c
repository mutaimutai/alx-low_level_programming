#include "lists.h"
/**
 * free_dlistint - is a function that frees a linked list
 *@head:head pointer of the list to free
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	if (head != NULL)
		current = head;
	while (current->next != NULL)
	{
		current = current->next;
	}
	free(current);
}
