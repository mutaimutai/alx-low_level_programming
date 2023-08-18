#include "lists.h"
/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list
 * @head: Pointer to the head of the list
 * @index: Index of the node to retrieve
 * Return: Pointer to the nth node, or NULL if the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	size_t i;

	if (head == NULL)
		return (NULL);
	current = head;
	for(i = 0; i < index && current->next != NULL; i++)
	{
		current = current->next;
	}
	return (current);
}
