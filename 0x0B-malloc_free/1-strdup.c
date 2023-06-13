#include <stdlib.h>
#include "main.h"
/**
 * _strdup-duplicates a string
 * @str:the string to be duplicated
 * Return:the duplicated string
 */
char *_strdup(char *str)
{
	char *dup;
	int i;
	int length = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[length] != '\0')
	{
		length++;
	}

	dup = (char *)malloc(sizeof(length));
	 if (dup == NULL)
	 {
		 return (NULL);
	 }

	for (i = 0; i < length; i++)
	{
		dup[i] = str[i];
	}
	dup[i] = '\0';
	return (dup);
}
