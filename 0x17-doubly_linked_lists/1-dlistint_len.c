#include "lists.h"
#include <stdio.h>
/**
 * dlistint_len - returns  the length of the list
 * @h:header pointer
 * Return:If successfull returnd the length
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t i = 0;

	current = h;
	while (current != NULL)
	{
		current = current->next;
		i++;
	}
	return (i);
}
