#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index-takes function pointer as an argument
 * @array:array to be passed
 * @size:size of array
 * @cmp:the function pointer
 * Return:first index of the array
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i;

	if (array == NULL || size <= 0 || cmp == NUUL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		cmp(array(i));
		return (i);
	}
	return (-1);
}
