#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * str_concat-concatenates  strings
 * @s1:1st string
 * @s2:2nd string
 * Return:the final string
 */
char *str_concat(char *s1, char *s2)
{
	int s1_length;
	int s2_length;
	int total;
	char *res;
	int i, j;

	s1_length = strlen(s1);
	s2_length = strlen(s2);
	total = s1_length + s2_length + 1;


	res = (char *)malloc(sizeof(char) * total);

	if (res == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		res[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		res[i + j] = s2[j];
	}
	res[i + j] = '\0';

	return (res);
}
