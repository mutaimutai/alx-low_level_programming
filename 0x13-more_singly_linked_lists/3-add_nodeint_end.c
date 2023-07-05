#include "lists.h"
/**
 * add_nodeint_end-adds a node at the end of a list
 * @head:pointer to the first node
 * @n:data entered to the list
 * Return:pointer to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *temp;

	newnode = (listint_t *)malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}

	temp = *head;
	newnode->n = n;
	newnode->next = NULL;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newnode;
	return (newnode);
}
