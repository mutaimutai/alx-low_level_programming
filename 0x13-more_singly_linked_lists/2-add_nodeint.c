#include "lists.h"
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = (listint_t*)malloc(sizeof(listint_t));
	if (ptr == NULL)
	{
		printf("memory allocation failed");
	}
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
