#include "lists.h"
/**
 * *get_nodeint_at_index-gets the nth node of a list
 * @head:pointer to the head node
 * @index:the index to be returned
 * Return:null if the index is not found
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int count = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	temp = head;
	while (temp != NULL)
	{
		if (count == index)
		{
			return (temp);
		}
		temp = temp->next;
		count++;
	}
	return (NULL);
}
