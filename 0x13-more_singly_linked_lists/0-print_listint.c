#include "lists.h"
/**
 * print_listint-prints elements of a list
 * @h:head  node of the list
 * Return:number of elements printed
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *ptr = 0;

	if (h == NULL)
	{
		printf("list is empty");
	}
	ptr = h;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		count++;
		ptr = ptr->next;
	}
	return (count);
}
