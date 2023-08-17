#include "lists.h"
/**
 * add_dnodeint_end-adds a node at the end of a list
 * @head:head pointer of the list to be passed
 * @n:the interger value
 * Return:a pointer to the integer
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *current;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
	{
		newnode->prev = NULL;
		*head = newnode;
		return (newnode);
	}
	current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}
	newnode->prev = current;
	current->next = newnode;
	return (newnode);
}
