#include "main.h"
#include <stdlib.h>
/**
 * _calloc- allocates a certain amout of memory in the heap
 * @nmemb:number of elements to be allocated
 * @size:size of each bytes
 * Return:NULL if empty and the pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i;
	int *ptr;
	int total_size;

	if (nmemb == 0)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}
	total_size = nmemb * size;
	ptr = malloc(total_size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < total_size; i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}
