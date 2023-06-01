#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 *_strncat-concatenates two strings
 *@dest:to string to be concatenated
 *@src:the string to be concatenated
 *@n:the size of src
 *Return:returns res after being concatenated with src
 */
char *_strncat(char *dest, char *src, int n)
{
	int des_len = strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[des_len + i] = src[i];
		dest[des_len + i] = '\0';
	}
	return (dest);
}
