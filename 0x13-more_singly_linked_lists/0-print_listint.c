#include "lists.h"
/**
 * print_listint-prints elements of a list
 * @h:head  node of the list
 * Return:number of elements printed
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

		while (h != NULL)
		{
			printf("%d\n", h->n);
			count++;
			h = h->next;
		}
	return (count);
}
