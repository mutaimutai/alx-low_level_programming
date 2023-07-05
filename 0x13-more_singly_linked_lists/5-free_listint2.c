#include "lists.h"
/**
 * free_listint2-frees a link list
 * @head:pointer to the head node of a list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *ptr;

	if (head == NULL)
	{
		return;
	}
	temp = *head;
	ptr = temp;
	while (temp != NULL)
	{
		temp = temp->next;
		free(ptr);
		ptr = temp;
	}
	*head = NULL;
}
