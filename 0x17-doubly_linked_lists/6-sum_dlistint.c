#include "lists.h"
/**
 *sum_dlistint-is a function that sums all the data in a link list
 *@head:head pointer to the list
 *Return:the sum of all elements in the list
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum = 0;

	if (head == NULL)
		return (0);
	current = head;
	sum = current->n;
	while (current->next != NULL)
	{
		current = current->next;
		sum = sum + current->n;
	}
	return (sum);
}
