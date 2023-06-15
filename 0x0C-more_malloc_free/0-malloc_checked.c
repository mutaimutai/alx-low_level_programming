#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked-allocates memory using malloc
 * @b:argument to be input
 * Return:the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *res;

	res = malloc(b);
	if (res == NULL)
	{
		exit(98);
	}
	return (res);
}
