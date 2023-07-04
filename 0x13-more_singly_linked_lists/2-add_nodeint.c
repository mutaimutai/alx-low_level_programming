#include "lists.h"
/**
 * add_nodeint-add a node at the beginning
 * @head:head pointer
 * @n:the integer to add
 * Return:pointer to the added node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = (listint_t *)malloc(sizeof(listint_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (*head);
}
