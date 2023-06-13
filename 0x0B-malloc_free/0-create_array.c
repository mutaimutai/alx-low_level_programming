#include "main.h"
#include <stdlib.h>
/**
 * cretae_array-function creates memory dynamically
 * @size:size of array
 * @c:the string to  be copied
 * Return:the copied array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ch;

	if (size == 0)
	{
		return (NULL);
	}

	ch = (char*)malloc((size + 1) * sizeof(char));

	if (ch == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ch[i] = c;
	}
	ch[size] = '\0';
	return (ch);
}
