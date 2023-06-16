#include "main.h"
#include <stdlib.h>

/**
 * array_range-print a range of intergers from min to max
 * @min:where to start
 * @max:where to stop
 * Return:apointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int total;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	total = max - min + 1;
	ptr = malloc(total *  sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= total; i++)
	{
		ptr[i] = min + i;
	}
	return (ptr);
}
