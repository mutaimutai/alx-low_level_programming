#include "lists.h"
/**
 * insert_nodeint_at_index-insert index at nth index
 * @head:pointer to the head node
 * @idx:the index to be added
 * @n:the integer data to be added
 * Return:null if the list is empty
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *newnode;
	unsigned int count = 0;

	if (*head == NULL)
	{
		return (NULL);
	}
	temp = *head;
	newnode = (listint_t *)malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;
	while (temp != NULL)
	{
		if (count == idx)
		{
			newnode->next = temp;
			count++;
			temp = temp->next;
		}
	}
	return (NULL);
}
