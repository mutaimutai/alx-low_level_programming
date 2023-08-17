#include "lists.h"
/*
 *add_dnodeint - adds a new node at the beginning
 * of a dlistint_t list
 * Description:This function adds a new node at the beginning of the node
 * @head:head pointer
 * n@:the data to be input
 * Return:returns adress to the new data
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->prev = NULL;
	newnode->n = n;
	newnode->next = *head;
	if (*head != NULL)
		(*head)->prev = newnode;
	*head = newnode;
	return (newnode);
}
