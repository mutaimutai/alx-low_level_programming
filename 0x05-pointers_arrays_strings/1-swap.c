#include "main.h"
/**
 * swap_int-function to swap integers
 * @a:1st argument
 * @b:2nd intger
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
