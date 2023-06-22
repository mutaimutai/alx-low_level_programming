#include <stdlib.h>
#include "function_pointer.h"
#include <stdio.h>
/**
 * array_iterator-a function that takes in an array pointer as argument
 * @array:array itself
 * @size:size of the array
 * @action:the function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
	{
		exit(98);
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
