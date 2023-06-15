#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * string_nconcat-concatenates 2 strings
 * @s1:1st character
 * @s2:2nd character
 * @n:number of bytes to be copied
 * Return:returns a concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char * ptr;
	unsigned int s1_length;
	unsigned int s2_length;
	unsigned int total;
	unsigned int i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	s1_length = strlen(s1);
	s2_length = strlen(s2);
	total = s1_length + s2_length + 1;
	ptr = malloc(sizeof(char) * total);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < s1_length; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		ptr[i + j] = s2[j];
	}
	ptr[total - 1] = '\0';
	return (ptr);
}
