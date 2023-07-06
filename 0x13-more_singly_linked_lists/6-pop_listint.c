#include "lists.h"
/**
 * pop_listint-deletes the first node of the list
 * @head:double pointer to the linked list
 * Return:the value of the first node
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int value;

	if (*head == NULL)
	{
		return (0);
	}
	temp = *head;
	value = temp->n;
	*head = temp->next;
	free(temp);
	return (value);
}
