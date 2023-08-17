#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint-afunction that prints out a lost
 * @h:a pointer to the header file
 * Return:If successfull the number of list
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t i;

	current = h;
	for (i = 0; current != NULL; i++)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
	return (i);
}
