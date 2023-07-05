#include "lists.h"
/**
 * free_listint-frees a linked list
 * @head:pointer to the first node
 */
void free_listint(listint_t *head)
{
	listint_int *temp;

	temp = head;
	while (temp != NULL)
	{
		temp = temp->link;
		free(head);
		head = temp;
	}
}
