#include "main.h"
/**
 * cretae_array-function creates memory dynamically
 * @size:size of array
 * @c:the string to  be copied
 * Return:the copied array
 */
char *create_array(unsigned int size, char c)
{
	int i;

	if (size == 0)
	{
		return (NULL);
	}

	char *ch = (char*)malloc(size * sizeof(char));

	if (ch == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ch[i] = c;
	}
	return (0);
}
