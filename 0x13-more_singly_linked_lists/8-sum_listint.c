#include "lists.h"
/**
 * sum_listint-sums all the data n in a list
 * @head:pointer to the head node
 * Return:the sum of the data
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	temp = head;
	if (head == NULL)
	{
		return (0);
	}
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
